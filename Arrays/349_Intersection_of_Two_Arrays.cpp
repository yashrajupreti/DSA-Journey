
// LeetCode 349: Intersection of Two Arrays
// Approach: Hashing using unordered_map
// Time Complexity: O(n + m) average
// Space Complexity: O(n + m)

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> ans;

        // Store frequency of nums1
        for (int i = 0; i < nums1.size(); i++) {
            freq[nums1[i]]++;
        }

        // Check nums2
        for (int i = 0; i < nums2.size(); i++) {
            if (freq[nums2[i]] > 0) {
                ans.push_back(nums2[i]);
                freq[nums2[i]] = 0;
            }
        }

        return ans;
    }
};
