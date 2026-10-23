
// Topic: Two Pointers
// Problem: Palindrome Check Without Swapping
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "sadcas";

    int left = 0;
    int right = s.size() - 1;
    bool palindrome = true;

    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else {
            palindrome = false;
            break;
        }
    }

    if (palindrome) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
