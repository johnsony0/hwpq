#!/usr/bin/env bash
#
# Run every testbench in the suite
# Usage: test/run_all_sims.sh
#
set -u

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# module_dir | top_module
TESTS=(
  # Enqueue-enabled runs
  "register_array|register_array_tb"
  "register_array_pipelined|register_array_pipelined_tb"
  "register_tree|register_tree_tb"
  "register_tree_pipelined|register_tree_pipelined_tb"
  "systolic_array|systolic_array_tb"
  "bram_tree|bram_tree_tb"
  # Replace-only (ENQ_ENA=0) runs: second sim of the same DUT
  "register_array|register_array_enq0_tb"
  "register_array_pipelined|register_array_pipelined_enq0_tb"
  "register_tree|register_tree_enq0_tb"
  "register_tree_pipelined|register_tree_pipelined_enq0_tb"
  # bram_tree_pipelined has no enqueue path -> replace-only only
  "bram_tree_pipelined|bram_tree_pipelined_tb"
  # Bug-reproduction (kept separate from the shared harness)
  "systolic_array|systolic_array_bug_tb"
)

declare -a RESULTS=()
overall_status=0

for entry in "${TESTS[@]}"; do
  IFS='|' read -r module top <<< "$entry"
  echo "#############################################################"
  echo "# ${module}  (${top})"
  echo "#############################################################"
  if "${SCRIPT_DIR}/run_sim.sh" "${module}" "${top}"; then
    RESULTS+=("PASS  ${module}  ${top}")
  else
    RESULTS+=("FAIL  ${module}  ${top}")
    overall_status=1
  fi
  echo
done

echo "============================================================"
echo "Summary"
echo "============================================================"
printf '%s\n' "${RESULTS[@]}"

exit "${overall_status}"
