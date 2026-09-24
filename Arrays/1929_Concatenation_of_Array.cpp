// LeetCode 1929 - Concatenation of Array
// Time Complexity: O(n)
// Space Complexity: O(n)
//code
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i;
        int n = nums.size();
        vector<int>ans(2*n);
         for(i=0 ; i < nums.size();i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
         }
         return ans;
    }
        
    
};
