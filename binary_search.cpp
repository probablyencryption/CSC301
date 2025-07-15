#include <iostream>
#include <vector>

using namespace std;

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
 * TEST FUNCTION FOR BINARY SEARCH
 */
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
    
    // Additional explanation
    cout << "Explanation:" << endl;
    cout << "- Base case: low > high (element not found) returns -1" << endl;
    cout << "- Recursive case: Compare middle element with target and search appropriate half" << endl;
    cout << "- Divides the search space in half with each recursive call" << endl;
}

int main() {
    cout << "BINARY SEARCH RECURSIVE SOLUTION" << endl;
    cout << "=================================" << endl << endl;
    
    testBinarySearch();
    
    cout << "Test completed successfully!" << endl;
    
    return 0;
} 