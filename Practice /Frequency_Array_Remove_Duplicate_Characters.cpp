
// Topic: Frequency Array
// Problem: Remove Duplicate Characters from a String
// Time Complexity: O(n)
// Space Complexity: O(1) - fixed-size frequency array

#include <iostream>
using namespace std;

int main() {
    string s = "programming";
    int freq[26] = {0};
    string result;

    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i] - 'a'] == 0) {
            result += s[i];
            freq[s[i] - 'a']++;
        }
    }

    cout << result << endl;

    return 0;
}
