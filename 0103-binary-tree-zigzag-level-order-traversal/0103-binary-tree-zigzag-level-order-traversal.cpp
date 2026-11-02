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
        vector<vector<int>>ans;
        if(root == NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool leftToright = true;
        while(q.size()!= 0){
            int levelSize = q.size();
            vector<int>currAns;
            for(int i=0;i<levelSize;i++){
                TreeNode* curr = q.front();
                q.pop();
               
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!= NULL){
                    q.push(curr->right);
                }

                currAns.push_back(curr->val);
            } 
            if(!leftToright){
                    reverse(currAns.begin(),currAns.end());
            }
            ans.push_back(currAns);

            leftToright = !leftToright;
        }
        return ans;
    }
};