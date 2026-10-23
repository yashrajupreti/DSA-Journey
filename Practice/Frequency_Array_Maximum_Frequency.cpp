
// Topic: Frequency Array
// Problem: Find the Highest Character Frequency
// Time Complexity: O(n)
// Space Complexity: O(1) - fixed-size frequency array

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "banana";
    int freq[26] = {0};
    int max = 0;

    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (max < freq[i]) {
            max = freq[i];
        }
    }

    cout << max << endl;

    return 0;
}
