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
private:
    int dfs(TreeNode *root, int L, int R) {
        int ans = 0;
        if (root != NULL) {
            if (root->val >= L && root->val <= R) {
                ans += root->val;
            }
            if (root->val > L) {
                ans += dfs(root->left, L, R);
            }
            if (root->val < R) {
                ans += dfs(root->right, L, R);
            }
        }
        return ans;
    }

public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        return dfs(root, L, R);
    }
};