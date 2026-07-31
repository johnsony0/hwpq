#!/usr/bin/env bash
#
# Compile and run a single module's testbench with Icarus Verilog.
#
# Usage: test/run_sim.sh <module_dir> <top_module>
#   <module_dir>  name under hwpq/ (e.g. register_tree)
#   <top_module>  testbench module, also its filename under test/<module_dir>/ (e.g. register_tree_tb)
#
set -eu

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

MODULE="$1"
TOP="$2"

SRC_DIR="hwpq/${MODULE}/src"
TB="${SCRIPT_DIR}/${MODULE}/${TOP}.sv"
# sharing build/${MODULE} would let the runs clobber each other's sim.vvp/sim.log.
BUILD="build/${TOP}"
LOG="${BUILD}/sim.log"
mkdir -p "${BUILD}"

shopt -s nullglob
PKGS=()
REST=()

ALL_FILES=("${SRC_DIR}"/*.sv)

for f in "${ALL_FILES[@]}"; do
  if grep -qE '^[[:space:]]*package[[:space:]]' "$f"; then
    PKGS+=("$f")
  else
    REST+=("$f")
  fi
done

echo "==> Compiling ${MODULE} (top: ${TOP})"
iverilog -g2012 -Wall -I "${SCRIPT_DIR}/common" -s "${TOP}" -o "${BUILD}/sim.vvp" "${PKGS[@]}" "${REST[@]}" "${TB}"

echo "==> Running ${MODULE}"
vvp "${BUILD}/sim.vvp" | tee "${LOG}"
status="${PIPESTATUS[0]}"

echo "==> Checking results for ${MODULE}"

if [ "${status}" -ne 0 ]; then
  echo "::error::${MODULE}: testbench exited with status ${status}"
fi

if [ "${status}" -eq 0 ]; then
  echo "PASS: ${MODULE}"
else
  echo "FAIL: ${MODULE}"
fi
exit "${status}"
