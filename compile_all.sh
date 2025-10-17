#!/usr/bin/env bash
set -euo pipefail
mkdir -p bin
CFLAGS="-std=c99 -O2 -Wall -Wextra"
for c in $(find src -name "*.c" | sort); do
  name=$(basename "$c" .c)
  out="bin/$name"
  echo "Compiling $c -> $out"
  gcc $CFLAGS -o "$out" "$c"
done
echo "All programs compiled into ./bin"
