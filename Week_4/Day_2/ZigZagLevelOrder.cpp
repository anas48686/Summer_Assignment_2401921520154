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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight=true;
        while(!q.empty()){
            int sizeOfQ=q.size();
            vector<int> level(sizeOfQ);
            for(int i=0;i<sizeOfQ;i++){
                TreeNode* node=q.front();
                q.pop();
                int idx=leftToRight? i : sizeOfQ-i-1;
                level[idx]=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            leftToRight=!leftToRight;
            ans.push_back(level);
        }
        return ans;
    }
};