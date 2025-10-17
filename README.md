# Programming for Problem Solving (C) — Lab Programs (JNTUH)

This repository contains **25 core C programs** (plus a couple of helper variants) mapped week-by-week to the JNTUH **Programming for Problem Solving Lab**.  
Each program includes notes/explanations inside the source file.

## Layout
```
pps-c-lab/
  src/week01..week10/    # C programs grouped by lab week
  bin/                   # compiled binaries land here
  docs/                  # extra notes
  Makefile               # build selected targets
  compile_all.sh         # build everything
  README.md
```
## Build (all)
```bash
# in repo root
bash compile_all.sh
```

## Build (single file)
```bash
# Example: build Fibonacci
make bin/03_fibonacci_n_terms
# or directly with gcc
gcc -std=c99 -O2 -Wall -Wextra -o bin/03_fibonacci_n_terms src/week01/03_fibonacci_n_terms.c
```

## Run examples
```bash
./bin/01_sum_of_digits
./bin/03_fibonacci_n_terms
./bin/04_primes_upto_n
# ... and so on (most programs prompt for input)
```

> Tip: All programs are **standalone** with a `main()` and explain the approach in a top-of-file comment banner.
