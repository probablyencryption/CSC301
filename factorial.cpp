#include <iostream>
#include <vector>

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
 * TEST FUNCTION FOR FACTORIAL
 */
void testFactorial() {
    cout << "=== FACTORIAL TESTS ===" << endl;
    
    // Test cases: edge case (0), small number (5), larger number (10)
    vector<int> testCases = {0, 5, 10};
    
    for (int n : testCases) {
        cout << "Factorial of " << n << " = " << factorial(n) << endl;
    }
    cout << endl;
    
    // Additional explanation
    cout << "Explanation:" << endl;
    cout << "- Base case: factorial(0) = 1 and factorial(1) = 1" << endl;
    cout << "- Recursive case: factorial(n) = n * factorial(n-1) for n > 1" << endl;
    cout << "- Each recursive call reduces the problem size by 1" << endl;
}

int main() {
    cout << "FACTORIAL RECURSIVE SOLUTION" << endl;
    cout << "============================" << endl << endl;
    
    testFactorial();
    
    cout << "Test completed successfully!" << endl;
    
    return 0;
} 