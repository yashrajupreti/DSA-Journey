// LeetCode 1480 - Running Sum of 1d Array
// Approach: Prefix Sum
// Time Complexity: O(n)
// Space Complexity: O(1
//code
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sums(nums.size());
        sums[0] = nums[0];
        int i;
        for (i = 1; i < nums.size(); i++) {
            sums[i] = nums[i] + sums[i - 1];
        }
        return sums;
    }
};
