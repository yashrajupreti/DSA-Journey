// LeetCode 485 - Max Consecutive Ones
// Time Complexity: O(n)
// Space Complexity: O(1)
//code
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int max = 0;
        int i;
        for(i = 0 ; i < nums.size();i++){
            if(nums[i] == 1){
                max++;
                if( max > max_count)
                max_count = max;
            }else{
                max = 0;
            }
        }
            return max_count;
            

        
        
    }
};
