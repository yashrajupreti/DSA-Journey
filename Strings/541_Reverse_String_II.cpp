
// LeetCode 541: Reverse String II
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();

        for (int i = 0; i < n; i += 2 * k) {
            int left = i;
            int right = min(i + k - 1, n - 1);

            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};
