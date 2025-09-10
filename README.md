# IPFCE Assignment 4 - Automated Testing

This repository includes automated testing for all programming exercises using GitHub Actions.

## How the Testing Works

When you push your code to GitHub, the automated tests will run and check:

1. **Exercise 2**: Unit tests for the `get_min()` function
2. **Exercise 4**: Unit tests for the `reverse()` function  
3. **Exercise 5**: Unit tests for the `longest_seq()` function
4. **Exercise 6**: Unit tests for the `count_1_to_20()` function
5. **Exercise 7**: Unit tests for the `average()` function

## Running Tests Locally

You can run the tests locally using the provided script:

```bash
./run_tests.sh
```

This will compile and test all your exercises on your local machine.

If a test fails, check the error message to understand what went wrong. Common issues:

- Compilation errors (syntax problems)
- Logic errors in your function implementation
- Missing `#include` statements or incorrect function signatures

## Tips for Students

1. Make sure your functions match the exact signatures specified in the exercise files
2. Include all necessary header files (`#include <assert.h>`, `#include <stdio.h>`, etc.)
3. Test your code locally using `./run_tests.sh` before pushing to GitHub
4. Read the test cases to understand what your functions should do
5. The tests will include your code automatically - you just need to implement the functions. 

## File Structure

- `exercise*.c` - Your exercise files (implement the functions here)
- `tests/test_exercise*.c` - Test files that will test your implementations
- `run_tests.sh` - Local testing script

## Important Notes

- **Do NOT modify the test files**
- The test files include your exercise code using `#include "../exercise*.c"`
- Make sure your function signatures exactly match what's specified in the comments
