/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* node1, TreeNode* node2){
        if(!node1 && !node2) return true;
        if(!node1 || !node2) return false;
        if(node1->val != node2->val) return false;
        
        bool leftSym=check(node1->left,node2->right);
        bool rightSym=check(node1->right,node2->left);
        return leftSym && rightSym;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        TreeNode* node1=root->left;
        TreeNode* node2=root->right;
        return check(node1,node2);
    }
};