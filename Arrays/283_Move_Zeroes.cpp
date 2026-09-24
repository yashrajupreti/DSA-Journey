// LeetCode 283 - Move Zeroes
// Approach: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)
//code
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int right = 0;
        int left = 0;
        while(right < nums.size()){
            if(nums[right] != 0){
                swap(nums[left] , nums[right]);
                left++;
                right++;
            }else{
                right++;
            }
        }
        
    }
};
