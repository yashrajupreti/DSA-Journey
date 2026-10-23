
// LeetCode 977: Squares of a Sorted Array
// Approach: Squaring and Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> product;

        for (int i = 0; i < nums.size(); i++) {
            product.push_back(nums[i] * nums[i]);
        }

        sort(product.begin(), product.end());

        return product;
    }
};
