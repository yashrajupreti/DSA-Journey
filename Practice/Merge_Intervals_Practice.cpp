
// Topic: Merge Intervals
// Approach: Compare and Merge Overlapping Intervals
// Time Complexity: O(n) - input intervals are already sorted
// Space Complexity: O(n)

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[4][2] = {
        {1, 4},
        {3, 5},
        {7, 9},
        {8, 10}
    };

    int result[4][2];
    int count = 0;

    int currentStart = arr[0][0];
    int currentEnd = arr[0][1];

    for (int i = 1; i < 4; i++) {
        if (arr[i][0] <= currentEnd) {
            currentEnd = max(currentEnd, arr[i][1]);
        } else {
            result[count][0] = currentStart;
            result[count][1] = currentEnd;
            count++;

            currentStart = arr[i][0];
            currentEnd = arr[i][1];
        }
    }

    result[count][0] = currentStart;
    result[count][1] = currentEnd;
    count++;

    for (int i = 0; i < count; i++) {
        cout << "[" << result[i][0] << ", "
             << result[i][1] << "]" << endl;
    }

    return 0;
}
