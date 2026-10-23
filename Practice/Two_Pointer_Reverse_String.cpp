
// Topic: Two Pointers
// Problem: Reverse a String
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "tank";

    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    cout << s << endl;

    return 0;
}
