#include <iostream>
#include <vector>
#include <string>

using namespace std;

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
 * TEST FUNCTION FOR STRING REVERSAL
 */
void testStringReversal() {
    cout << "=== STRING REVERSAL TESTS ===" << endl;
    
    // Test cases: empty string, single character, normal string
    vector<string> testCases = {"", "A", "recursion"};
    
    for (const string& str : testCases) {
        cout << "Reverse of \"" << str << "\" = \"" << reverseString(str) << "\"" << endl;
    }
    cout << endl;
    
    // Additional explanation
    cout << "Explanation:" << endl;
    cout << "- Base case: Empty string or single character returns itself" << endl;
    cout << "- Recursive case: reverse(str) = last_char + reverse(str_without_last_char)" << endl;
    cout << "- Takes the last character and concatenates it with the reverse of remaining string" << endl;
}

int main() {
    cout << "STRING REVERSAL RECURSIVE SOLUTION" << endl;
    cout << "===================================" << endl << endl;
    
    testStringReversal();
    
    cout << "Test completed successfully!" << endl;
    
    return 0;
} 