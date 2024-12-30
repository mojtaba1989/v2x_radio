#!/bin/sh
# Update ATOS C-Roads France (B735AC70F6A82B2D)
# Supersedes ATOS C-Roads France (A1333B3F8489F688)
# Supersedes ATOS C-Roads France (C7591A167144A543)
# https://0.fr-dc.l0.c-its-pki.eu

# CA is in the ECTL
./fetch-cpoc.sh

set -x

# Get CRL/CTL for this CA
wget --no-verbose https://0.fr-dc.l0.c-its-pki.eu/getctl/B735AC70F6A82B2D -O ctl
wget --no-verbose https://0.fr-dc.l0.c-its-pki.eu/getcrl/B735AC70F6A82B2D -O crl

# Manually configure ITS access point
# ATOS C-Roads France PKI doesn't set this in CTL
echo "http://0.fr-ea.l0.c-its-pki.eu/" > eaurl
