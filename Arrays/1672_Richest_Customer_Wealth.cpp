// LeetCode 1672 - Richest Customer Wealth
// Approach: Row Sum
// Time Complexity: O(m*n)
// Space Complexity: O(1)
//code
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int highest_wealth = 0;
        int i,j;
        for(i =0 ; i < accounts.size() ; i++){
             int sum = 0;
            for(j = 0 ; j < accounts[i].size() ; j++){
                sum += accounts[i][j];
                }
                if(sum > highest_wealth){
                    highest_wealth = sum;
            }
        }
        return highest_wealth;
    }
};
