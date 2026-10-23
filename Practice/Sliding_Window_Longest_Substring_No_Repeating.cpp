
// Topic: Sliding Window
// Problem: Longest Substring Without Repeating Characters
// Time Complexity: O(n)
// Space Complexity: O(1) - fixed-size frequency array

#include <iostream>
using namespace std;

int main() {
    string s = "abcabcbb";

    int freq[26] = {0};

    int left = 0;
    int right = 0;
    int maxLength = 0;

    while (right < s.size()) {
        freq[s[right] - 'a']++;

        while (freq[s[right] - 'a'] > 1) {
            freq[s[left] - 'a']--;
            left++;
        }

        int length = right - left + 1;

        if (length > maxLength) {
            maxLength = length;
        }

        right++;
    }

    cout << maxLength << endl;

    return 0;
}
