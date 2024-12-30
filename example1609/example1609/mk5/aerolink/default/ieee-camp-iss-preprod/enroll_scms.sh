#!/bin/bash

# 0.1 - Initial

# scms provisioning via ISS REST api
BOARD=
PERSISTDIR=
APP_DIR=
APP_NAME=

# If DNS exists then can use the URL directly,
# Otherwise use the IPv4 address with extra param '--no-check-certificate'
ISS_SERVER_HOSTNAME="api.dm.iss-scms.com"
ISS_SERVER_PREPROD_HOSTNAME="api.dm.preprod.v2x.isscms.com"

# Get Env Variables
get_env_variable()
{
  echo
  echo "***************************************************"
  echo "Get Environment Variables ..."
  ## Get BOARD Name
  if [ -z "$BOARD" ] ; then
    # try /proc/hwversion first, then check x86 and then fallback to hostname
    if [ -e /proc/hwversion ] ; then
      BOARD=$(cut -f 1 -d " " < /proc/hwversion)
    elif [ -f /.dockerenv ] ; then
      BOARD=docker_x86_64
    elif [ "$( uname -m )" = "x86_64" ] ; then
      BOARD=x86_64
    else
      BOARD=$(hostname)
    fi
  fi
  # Convert to lower case
  BOARD=$(echo "${BOARD}" | tr '[:upper:]' '[:lower:]')

  ## Get Application Directory
  if [ -z "${APP_DIR}" ] ; then
    case ${BOARD} in
      "mq5")
        APP_DIR=$( fullpath "$( dirname "$0" )")
        ;;
      *)
        APP_DIR=$(cd ../.. && pwd)
        APP_DIR=$(dirname "$APP_DIR")
        ;;
    esac

    APP_NAME=$(basename ${APP_DIR})

    if [ -d "${APP_DIR}/${APP_NAME}" ] ; then
      APP_DIR="${APP_DIR}/${APP_NAME}"
    elif [ -x /mnt/rw/${APP_NAME}/$APP_NAME ] ; then
      APP_DIR="/mnt/rw/${APP_NAME}"
    elif [ -x /opt/cohda/application/${APP_NAME}/$APP_NAME ] ; then
      APP_DIR="/opt/cohda/application/${APP_NAME}"
    fi
  fi

  if [ ! -x "${APP_DIR}/${APP_NAME}" ] ; then
    echo "${APP_DIR}/${APP_NAME}" is not executable since APP_DIR is not correct.
    echo
    echo "***************************************************"
    exit 1
  fi

  ## Get Persist Directory
  if [ -z "$PERSISTDIR" ] ; then
    case $BOARD in
      "mk5" | "mk6" | "mk6c" | "docker_x86_64" | "x86_64")
        PERSISTDIR="/mnt/./rw/${APP_NAME}"
        ;;
      *)
        PERSISTDIR=$(pwd)
        ;;
    esac
  fi

  echo "      BOARD: $BOARD"
  echo " PERSISTDIR: $PERSISTDIR"
  echo "    APP_DIR: $APP_DIR"
  echo "***************************************************"
  echo
}

# Generate enrollment request file and enroll through RESP API of ISS portal
generate_scms_request()
{
  echo
  echo "***************************************************"
  echo "Generate & Upload Enrollment Request File and Download Response ..."
  "$APP_DIR/rc.$APP_NAME" aerolink na-scms-ec-req "$API_Token" "$Group_ID" "$Profile" "$PSID_Set" "$Package_Type" "$Portal_Type"
  echo "***************************************************"
  echo
}

# Process response package
reply_scms_response()
{
  echo
  echo "***************************************************"
  echo "Process the Response Package ..."
  "$APP_DIR/rc.$APP_NAME" aerolink na-scms-ec-resp "$Package_Type"
  echo "***************************************************"
  echo
}

load_demo_certs()
{
  echo
  echo "***************************************************"
  echo "Load Demo Certificates ..."
  export AEROLINK_CONFIG_DIR=${APP_DIR}/aerolink/active/config;
  export AEROLINK_STATE_DIR=${APP_DIR}/aerolink/active/state;
  export LD_LIBRARY_PATH=:${APP_DIR}/lib
  export PATH=${APP_DIR}/aerolink:$PATH
  "$APP_DIR/rc.$APP_NAME" aerolink na-cohda-load
  echo "***************************************************"
  echo
}

save_URL2Stack_Conf()
{
  if [[ "$APP_NAME" == "rsuNA" ]] ; then
    if [[ "$Portal_Type" == "pre-production" ]] ; then
      ENROLL_URL_NAME="https://${ISS_SERVER_PREPROD_HOSTNAME}/api/v3/requests/enrollment"
    else
      ENROLL_URL_NAME="https://${ISS_SERVER_HOSTNAME}/api/v3/requests/enrollment"
    fi

    if [[ "" == $(grep RSUNA.Security.RsuSecEnrollCertUrl "${PERSISTDIR}/conf/stack.conf") ]]; then
        echo "RSUNA.Security.RsuSecEnrollCertUrl = ${ENROLL_URL_NAME}" >> "${PERSISTDIR}/conf/stack.conf"
    else
        URL_Val="RSUNA.Security.RsuSecEnrollCertUrl = ${ENROLL_URL_NAME}"
        sed -i "s|RSUNA.Security.RsuSecEnrollCertUrl.*|${URL_Val}|g" "${PERSISTDIR}/conf/stack.conf"
    fi
  fi
}

print_help()
{
  echo
  echo "***************************************************"
  echo "Usage: $0 <API_Token> <Group_ID> <Profile> <PSID_Set> <Package_Type> <Portal_Type>"
  echo
  echo "Options:"
  echo "  <API_Token>    API_Token applied to either 'api.dm.iss-scms.com' (production portal) or 'api.dm.preprod.v2x.isscms.com' (pre-production portal)"
  echo "  <Group_ID>     Request Group ID as per ISS portal."
  echo "  <Profile>      Profile as per ISS portal. Defaults to 'BasicRSU' if absent"
  echo "  <PSID_Set>     PSID_Set as per your security requirements. Defaults to the entire PSID set corresponding to the profile specified if absent"
  echo "  <Package_Type> Package type of response file to be downloaded. Set to either 'legacy' or 'non-legacy'. Defaults to 'legacy' if absent"
  echo "  <Portal_Type>  Portal type to enroll device. Set to either 'production' or 'pre-production'. Defaults to 'pre-production' if absent"
  echo "  --help         Display this message"
  echo "  -h             Display this message"
  echo "***************************************************"
  echo
}

##############################################################################
# main
##############################################################################

if [[ $# -eq 0 || $1 == "--help" || $1 == "-h" ]]; then
  print_help
  exit 1
else
  API_Token="$1"
  Group_ID="$2"
  Profile="${3:-"BasicRSU"}"
  PSID_Set="${4}"
  Package_Type="${5:-"legacy"}"
  Portal_Type="${6:-"pre-production"}"
fi

echo
echo "   API_Token: $API_Token"
echo "    Group ID: $Group_ID"
echo "     Profile: $Profile"
echo "    PSID Set: $PSID_Set"
echo "Package Type: $Package_Type"
echo " Portal Type: $Portal_Type"
echo

get_env_variable

generate_scms_request

reply_scms_response

load_demo_certs

save_URL2Stack_Conf

exit 0
