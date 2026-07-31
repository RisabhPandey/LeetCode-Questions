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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
            int level_size = Q.size();
            vector<int>curr_level;
            
            for(int i= 0; i< level_size; i++){
                TreeNode *node = Q.front();
                Q.pop();

                curr_level.push_back(node->val);
                if(node -> left!=NULL)
                    Q.push(node->left);
                if(node -> right!=NULL)
                    Q.push(node->right);
            }
            ans.push_back(curr_level);
        }
        return ans;
    }
};