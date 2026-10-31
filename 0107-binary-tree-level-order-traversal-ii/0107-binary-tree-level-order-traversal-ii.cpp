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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL)return ans;

        queue<TreeNode*>q;
        q.push(root);
        stack<vector<int>>st;

        while(q.size()!=0){
            int levelsize = q.size();
            vector<int>currAns;

            for(int i = 0; i<levelsize; i++){
                TreeNode* curr = q.front();
                q.pop(); 
                currAns.push_back(curr->val);
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            st.push(currAns);
        }
        while(st.size()!=0){
            vector<int>a = st.top();
            st.pop();
            ans.push_back(a);
        }
        return ans;
    }
};