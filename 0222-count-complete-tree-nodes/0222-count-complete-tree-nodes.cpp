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
    int leftTreeHeight(TreeNode* root){
        int h =0;
        while(root!=NULL){
            h++;
            root = root->left;
    }
    return h;
    }

public:
    int rightTreeHeight(TreeNode* root){
        int h =0;
        while(root!=NULL){
            h++;
            root = root->right;
        }
        return h;
    }
public:
    int countNodes(TreeNode* root) {
        if(root == NULL)return 0;
        int lh = leftTreeHeight(root);
        int rh = rightTreeHeight(root);

        
        return 1 + countNodes(root->left)+countNodes(root->right);
    }
};