
// LeetCode 144: Binary Tree Preorder Traversal
// Approach: Recursive Traversal
// Order: Root -> Left -> Right
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) {
            return;
        }

        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};
