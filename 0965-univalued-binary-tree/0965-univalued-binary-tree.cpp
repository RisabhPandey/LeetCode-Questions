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
    bool DFS(TreeNode* root,int val){
        if(root == NULL)return true;
        
        if(root->val != val){
            return false;
        }

        bool l = DFS(root->left,val);
        bool r = DFS(root->right,val);

        return l&&r;

    }
public:
    bool isUnivalTree(TreeNode* root) {
        int val = root->val;
        
        return(DFS(root,val));

    }
};