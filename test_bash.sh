#!/bin/bash
make
# Compile and run all test files
for test_file in test_*.c; do
    # Extract test name without extension
    test_name=$(basename "$test_file" .c)
    
    # Compile test file with library
    gcc -o "$test_name" "$test_file" ft_*.c -I.
    
    # Check if compilation was successful
    if [ $? -eq 0 ]; then
        # Run test executable
        ./"$test_name"
        
        # Check exit status to determine pass or fail
        if [ $? -eq 0 ]; then
            echo "$(tput setaf 2)Test $test_name: PASSED$(tput sgr0)"
        else
            echo "$(tput setaf 1)Test $test_name: FAILED$(tput sgr0)"
        fi
        
        # Clean up test executable
        rm -f "$test_name"
    else
        echo "Compilation failed for $test_file"
    fi
done
