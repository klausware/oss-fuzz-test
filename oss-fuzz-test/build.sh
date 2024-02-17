#!/bin/bash

# Compile convert_lib.c to an object file
$CC $CFLAGS -c convert_lib.c -o convert_lib.o

# Compile the fuzzing harness
$CC $CFLAGS -c fuzz_convert_lib.c -o fuzz_convert_lib.o

# Link the object files with the fuzzing engine into an executable
$CC $LIB_FUZZING_ENGINE fuzz_convert_lib.o convert_lib.o -o $OUT/convert_fuzzer
