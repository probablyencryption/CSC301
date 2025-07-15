#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
 * FACTORIAL CALCULATION
 * Base case: factorial(0) = 1 and factorial(1) = 1
 * Recursive case: factorial(n) = n * factorial(n-1)
 * Time complexity: O(n), Space complexity: O(n) due to call stack
 */
long long factorial(int n) {
    // Base case: factorial of 0 and 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

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
 * STRING REVERSAL
 * Base case: Empty string or single character returns itself
 * Recursive case: reverse(str) = last_char + reverse(str without last char)
 * Time complexity: O(n), Space complexity: O(n) due to call stack and string operations
 */
string reverseString(const string& str) {
    // Base case: empty string or single character
    if (str.length() <= 1) {
        return str;
    }
    // Recursive case: last character + reverse of substring (0 to n-2)
    return str.back() + reverseString(str.substr(0, str.length() - 1));
}

/**
 * BINARY SEARCH (RECURSIVE)
 * Base case: low > high (element not found) returns -1
 * Recursive case: Compare middle element with target and search appropriate half
 * Time complexity: O(log n), Space complexity: O(log n) due to call stack
 */
int binarySearch(const vector<int>& arr, int target, int low, int high) {
    // Base case: element not found
    if (low > high) {
        return -1;
    }
    
    int mid = low + (high - low) / 2;
    
    // Base case: element found
    if (arr[mid] == target) {
        return mid;
    }
    
    // Recursive cases
    if (arr[mid] > target) {
        // Search left half
        return binarySearch(arr, target, low, mid - 1);
    } else {
        // Search right half
        return binarySearch(arr, target, mid + 1, high);
    }
}

/**
 * Wrapper function for binary search
 */
int binarySearch(const vector<int>& arr, int target) {
    return binarySearch(arr, target, 0, arr.size() - 1);
}

/**
 * TEST FUNCTIONS
 */
void testFactorial() {
    cout << "=== FACTORIAL TESTS ===" << endl;
    
    // Test cases: edge case (0), small number (5), larger number (10)
    vector<int> testCases = {0, 5, 10};
    
    for (int n : testCases) {
        cout << "Factorial of " << n << " = " << factorial(n) << endl;
    }
    cout << endl;
}

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
}

void testStringReversal() {
    cout << "=== STRING REVERSAL TESTS ===" << endl;
    
    // Test cases: empty string, single character, normal string
    vector<string> testCases = {"", "A", "recursion"};
    
    for (const string& str : testCases) {
        cout << "Reverse of \"" << str << "\" = \"" << reverseString(str) << "\"" << endl;
    }
    cout << endl;
}

void testBinarySearch() {
    cout << "=== BINARY SEARCH TESTS ===" << endl;
    
    // Test case 1: Normal sorted array
    vector<int> arr1 = {1, 3, 5, 7, 9, 11, 13, 15};
    cout << "Array 1: ";
    for (int val : arr1) cout << val << " ";
    cout << endl;
    
    vector<int> targets1 = {7, 1, 16}; // found, first element, not found
    for (int target : targets1) {
        int result = binarySearch(arr1, target);
        if (result != -1) {
            cout << "Target " << target << " found at index " << result << endl;
        } else {
            cout << "Target " << target << " not found" << endl;
        }
    }
    
    // Test case 2: Single element array
    cout << "\nArray 2: ";
    vector<int> arr2 = {42};
    for (int val : arr2) cout << val << " ";
    cout << endl;
    
    vector<int> targets2 = {42, 10}; // found, not found
    for (int target : targets2) {
        int result = binarySearch(arr2, target);
        if (result != -1) {
            cout << "Target " << target << " found at index " << result << endl;
        } else {
            cout << "Target " << target << " not found" << endl;
        }
    }
    
    // Test case 3: Empty array (edge case)
    cout << "\nArray 3: ";
    vector<int> arr3 = {};
    cout << "(empty)" << endl;
    
    int target3 = 5;
    int result3 = binarySearch(arr3, target3);
    if (result3 != -1) {
        cout << "Target " << target3 << " found at index " << result3 << endl;
    } else {
        cout << "Target " << target3 << " not found in empty array" << endl;
    }
    
    cout << endl;
}

int main() {
    cout << "RECURSIVE PROBLEMS SOLUTION" << endl;
    cout << "===========================" << endl << endl;
    
    // Test all recursive functions
    testFactorial();
    testFibonacci();
    testStringReversal();
    testBinarySearch();
    
    cout << "All tests completed successfully!" << endl;
    
    return 0;
} 