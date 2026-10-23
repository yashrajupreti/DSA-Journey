
// LeetCode 1365: How Many Numbers Are Smaller Than the Current Number
// Approach: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int i, j;

        for (i = 0; i < nums.size(); i++) {
            int count = 0;

            for (j = 0; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};
