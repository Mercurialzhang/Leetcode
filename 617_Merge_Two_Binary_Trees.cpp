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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode *result = new TreeNode(0);
        if(t1 == NULL) {
            return t2;
        }
        if(t2 == NULL) {
            return t1;
        }
        result->val = t1->val + t2->val;
        result->left = mergeTrees(t1->left,t2->left);
        result->right = mergeTrees(t1->right, t2->right);
        return result;
    }
};
