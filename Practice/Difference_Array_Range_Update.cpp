
// Topic: Difference Array
// Concept: Efficient Range Update
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {0, 0, 0, 0, 0, 0};
    int diff[6] = {0, 0, 0, 0, 0, 0};

    int l = 2;
    int r = 4;
    int x = 4;

    // Mark where the update starts
    diff[l] = diff[l] + x;

    // Mark where the update stops
    if (r + 1 < n) {
        diff[r + 1] = diff[r + 1] - x;
    }

    // Build the final array
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + diff[i];
        arr[i] = sum;
    }

    // Print the final array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
