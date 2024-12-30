#!/bin/sh
# Update for Microsec V2X Root CA (B65E3B8FBBEC3910)
# http://v2x-pki-test.microsec.com/v2x_rootca_nistp256/

# CA is in the ECTL
./fetch-cpoc.sh

set -x

# Get CRL/CTL for this CA
wget --no-verbose https://v2x-pki-test.microsec.com/v2x_rootca_nistp256/getctl/B65E3B8FBBEC3910 -O ctl
wget --no-verbose https://v2x-pki-test.microsec.com/v2x_rootca_nistp256/getcrl/B65E3B8FBBEC3910 -O crl

