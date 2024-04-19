#!/bin/bash

# List of test files and corresponding output filenames
TEST_FILES="test_ft_isalpha.c:ft_isalpha test_ft_isprint.c:ft_isprint test_ft_strlen.c:ft_strlen"

# Compile and run test programs
for test_entry in $TEST_FILES; do
    # Extract test file name and output filename
    test_file=$(echo "$test_entry" | cut -d':' -f1)
    output_file=$(echo "$test_entry" | cut -d':' -f2)

    # Compile test program with the specified output filename
    gcc -o "$output_file" "$test_file" -L. -lft

    # Run test program
    "./$output_file"

    # Capture exit status
    exit_status=$?

    # Check exit status and print result
    if [ $exit_status -eq 0 ]; then
        echo "$output_file: PASSED"
    else
        echo "$output_file: FAILED"
    fi
done
