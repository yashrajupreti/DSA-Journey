
// LeetCode 94: Binary Tree Inorder Traversal
// Approach: Recursive Traversal
// Order: Left -> Root -> Right
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nums;
        inorder(root, nums);
        return nums;
    }

    void inorder(TreeNode* root, vector<int>& nums) {
        if (root == NULL) {
            return;
        }

        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
};
