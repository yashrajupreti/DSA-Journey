
// LeetCode 1528: Shuffle String
// Approach: Index Mapping
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;

        for (int i = 0; i < s.size(); i++) {
            ans[indices[i]] = s[i];
        }

        return ans;
    }
};
