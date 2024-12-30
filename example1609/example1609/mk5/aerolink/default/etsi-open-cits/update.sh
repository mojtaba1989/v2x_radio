#!/bin/sh
# Update for Open C-ITS Test PKI Root CA (ADB60E2871BA306B)

# CA is in the ECTL
./fetch-cpoc.sh

set -x

# Get CRL/CTL for this CA
wget --no-verbose http://pki.seacat.io/cits-otenv/cits/dc/getctl/ADB60E2871BA306B -O ctl
wget --no-verbose http://pki.seacat.io/cits-otenv/cits/dc/getcrl/ADB60E2871BA306B -O crl

