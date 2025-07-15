# CSC301 - Recursive Problems (Individual Files)

This repository contains individual C++ implementations for 4 recursive problems, split into separate files for easier testing and understanding.

## Files Structure

- `factorial.cpp` - Recursive factorial calculation
- `fibonacci.cpp` - Recursive Fibonacci sequence generation
- `string_reversal.cpp` - Recursive string reversal
- `binary_search.cpp` - Recursive binary search algorithm
- `recursive_problems.cpp` - Original combined implementation
- `csc301.md` - Detailed explanations and recursion vs iteration comparison
- `test_all.sh` - Script to test all problems at once

## How to Test Individual Problems

### Method 1: Test Individual Files

```bash
# Compile and test factorial
g++ -o factorial factorial.cpp
./factorial

# Compile and test fibonacci
g++ -o fibonacci fibonacci.cpp
./fibonacci

# Compile and test string reversal
g++ -o string_reversal string_reversal.cpp
./string_reversal

# Compile and test binary search
g++ -o binary_search binary_search.cpp
./binary_search
```

### Method 2: Test All at Once

**Using the test script (Unix/Mac/Linux):**
```bash
chmod +x test_all.sh
./test_all.sh
```

**Or manually test all:**
```bash
g++ -o factorial factorial.cpp && ./factorial
g++ -o fibonacci fibonacci.cpp && ./fibonacci
g++ -o string_reversal string_reversal.cpp && ./string_reversal
g++ -o binary_search binary_search.cpp && ./binary_search
```

## Expected Test Results

### Factorial Tests
- factorial(0) = 1
- factorial(5) = 120  
- factorial(10) = 3628800

### Fibonacci Tests
- fibonacci(0) = 0
- First 7 numbers: 0, 1, 1, 2, 3, 5, 8
- First 12 numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

### String Reversal Tests
- Reverse of "" = ""
- Reverse of "A" = "A"
- Reverse of "recursion" = "noisrucer"

### Binary Search Tests
- Array [1,3,5,7,9,11,13,15]: finds 7 at index 3, finds 1 at index 0, doesn't find 16
- Single element [42]: finds 42 at index 0, doesn't find 10  
- Empty array: doesn't find any target

## Recursive Function Explanations

Each file includes detailed comments explaining:
- **Base cases** - Conditions that stop recursion
- **Recursive cases** - How the problem reduces to smaller subproblems
- **Time/Space complexity** - Performance characteristics

## Compilation Requirements

- C++11 or higher
- GCC compiler (g++) or equivalent
- Standard library support for `<iostream>`, `<vector>`, `<string>`

## Assessment Compliance

✅ All 4 recursive functions implemented  
✅ Each function tested with 3+ inputs including edge cases  
✅ Complete documentation with base/recursive case explanations  
✅ 150-200 word comparison of recursion vs iteration (in csc301.md)  
✅ Well-commented code explaining recursive logic 