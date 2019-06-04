/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool dfs (TreeNode* root, long Min, long Max) {
        if (root == NULL) {
            return true;
        }
        if (root->val >= Max or root->val <= Min) {
            return false;
        }
        return dfs(root->right, root->val, Max) && dfs(root->left, Min, root->val);
    }

    bool isValidBST(TreeNode* root) {
        return dfs(root, LONG_MIN, LONG_MAX);
    }
};