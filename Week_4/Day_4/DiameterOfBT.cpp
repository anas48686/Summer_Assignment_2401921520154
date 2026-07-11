/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root, int& maxPath) {
        if (!root)
            return 0;
        int leftHeight = solve(root->left,maxPath);
        int rightHeight = solve(root->right,maxPath);
        if((leftHeight+rightHeight)>maxPath){
            maxPath=leftHeight+rightHeight;
        }
        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        int maxPath = 0;
        solve(root,maxPath);
        return maxPath;
    }
};