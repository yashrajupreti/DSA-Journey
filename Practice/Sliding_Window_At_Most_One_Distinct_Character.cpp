
// Topic: Sliding Window
// Problem: Longest Substring with At Most One Distinct Character
// Time Complexity: O(n)
// Space Complexity: O(1) - fixed-size frequency array

#include <iostream>
using namespace std;

int main() {
    string s = "aabbbcc";

    int freq[26] = {0};

    int left = 0;
    int right = 0;

    int unique = 0;
    int maxLength = 0;

    while (right < s.size()) {
        // Add current character
        if (freq[s[right] - 'a'] == 0) {
            unique++;
        }

        freq[s[right] - 'a']++;

        // If more than 1 unique character
        while (unique > 1) {
            freq[s[left] - 'a']--;

            // Character completely removed from window
            if (freq[s[left] - 'a'] == 0) {
                unique--;
            }

            left++;
        }

        // Current valid window length
        int length = right - left + 1;

        if (length > maxLength) {
            maxLength = length;
        }

        right++;
    }

    cout << maxLength << endl;

    return 0;
}
