#include <iostream>
#include <vector>

using namespace std;

/**
 * FIBONACCI SEQUENCE
 * Base case: fib(0) = 0, fib(1) = 1
 * Recursive case: fib(n) = fib(n-1) + fib(n-2)
 * Time complexity: O(2^n), Space complexity: O(n) due to call stack
 */
long long fibonacci(int n) {
    // Base cases
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
 * Helper function to generate first n Fibonacci numbers
 */
void generateFibonacci(int n) {
    cout << "First " << n << " Fibonacci numbers: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i);
        if (i < n - 1) cout << ", ";
    }
    cout << endl;
}

/**
 * TEST FUNCTION FOR FIBONACCI
 */
void testFibonacci() {
    cout << "=== FIBONACCI TESTS ===" << endl;
    
    // Test cases: edge case (0), small sequence (7), larger sequence (12)
    vector<int> testCases = {0, 7, 12};
    
    for (int n : testCases) {
        if (n == 0) {
            cout << "Fibonacci of 0 = " << fibonacci(0) << endl;
        } else {
            generateFibonacci(n);
        }
    }
    cout << endl;
    
    // Additional explanation
    cout << "Explanation:" << endl;
    cout << "- Base cases: fibonacci(0) = 0 and fibonacci(1) = 1" << endl;
    cout << "- Recursive case: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) for n > 1" << endl;
    cout << "- Each number is the sum of the two preceding numbers" << endl;
}

int main() {
    cout << "FIBONACCI RECURSIVE SOLUTION" << endl;
    cout << "============================" << endl << endl;
    
    testFibonacci();
    
    cout << "Test completed successfully!" << endl;
    
    return 0;
} 