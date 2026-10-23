
// LeetCode 88: Merge Sorted Array
// Approach: Two Pointers (Merge from the End)
// Time Complexity: O(m + n)
// Space Complexity: O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = m + n - 1;
        int j = m - 1;
        int i = n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[j] >= nums2[i]) {
                nums1[index] = nums1[j];
                index--;
                j--;
            } else {
                nums1[index] = nums2[i];
                i--;
                index--;
            }
        }

        while (i >= 0) {
            nums1[index] = nums2[i];
            index--;
            i--;
        }
    }
};
