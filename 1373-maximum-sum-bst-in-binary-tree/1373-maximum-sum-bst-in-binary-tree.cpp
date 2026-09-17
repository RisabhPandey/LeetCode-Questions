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
class Info{
public:
    int sum;
    int maxVal;
    int minVal;

    Info(int sum, int maxVal, int minVal) // Constructor
    {
        this -> sum = sum;
        this -> maxVal = maxVal;
        this -> minVal = minVal;
    }
};

class Solution {
    int maxsum = 0;
public:
    int maxSumBST(TreeNode* root) {
         DFS(root);
         return maxsum;
    }
    Info DFS(TreeNode* root){
        if(root == nullptr)
            return Info(0,INT_MIN,INT_MAX);
        if(root->left == nullptr && root->right == nullptr)
            return Info(root->val,root->val,root->val);

        Info left = DFS(root->left);
        Info right = DFS(root->right);

        if(root->val > left.maxVal && root->val < right.minVal){
            int s = root->val + left.sum + right.sum;
            maxsum = max(maxsum,s);
            int mx = max(root->val, right.maxVal);
            int mn = min(root->val, left.minVal);


            return Info(s,mx,mn);
        }
        else{
            int s = max(left.sum,right.sum);
            maxsum = max(maxsum,s);

            int mx = INT_MAX;
            int mn = INT_MIN;

            return Info(s,mx,mn);
        }
    }
};