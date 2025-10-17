#!/usr/bin/env bash
set -euo pipefail
if [ $# -lt 1 ]; then
  echo "Usage: $0 <relative_script_path_under_src>" >&2
  echo "Example: $0 week01/01_hello.py" >&2
  exit 1
fi
python "src/$1"
