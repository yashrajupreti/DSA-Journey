
// Topic: Frequency Array
// Problem: Anagram Check
// Time Complexity: O(n)
// Space Complexity: O(1) - fixed-size frequency arrays

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "listen";
    string p = "silent";

    int freq[26] = {0};
    bool anagram = true;

    if (s.length() != p.length()) {
        anagram = false;
    } else {
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[p[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                anagram = false;
                break;
            }
        }
    }

    if (anagram) {
        cout << "anagram" << endl;
    } else {
        cout << "not anagram" << endl;
    }

    return 0;
}
