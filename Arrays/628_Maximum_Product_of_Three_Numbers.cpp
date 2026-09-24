// LeetCode 628 - Maximum Product of Three Numbers
// Time Complexity: O(n)
// Space Complexity: O(1)
//code

#include <climits>
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int i;
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;

       for(i = 0 ;i < nums.size() ; i++){
        if(nums[i] > max1){
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        } else if(nums[i] > max2){
            max3 = max2;
            max2 = nums[i];
        }else if(nums[i] > max3){
            max3 = nums[i];
        }
       if(nums[i] < min1){
        min2 = min1;
        min1 = nums[i];
       } else if(nums[i] < min2){
        min2 = nums[i];
       }
       }
       int product1 = max1 * max2 * max3;
       int product2 = min1 * min2 * max1;

       return max(product1 , product2);
    }
};
