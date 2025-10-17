CC=gcc
CFLAGS=-std=c99 -O2 -Wall -Wextra

SRC_DIR=src
BIN_DIR=bin

# List selected targets here for convenience; compile_all.sh builds everything
TARGETS= \
	bin/01_sum_of_digits \
	bin/03_fibonacci_n_terms \
	bin/04_primes_upto_n \
	bin/05_quadratic_roots

all: $(TARGETS)

bin/%: src/*/%*.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(BIN_DIR)/*
