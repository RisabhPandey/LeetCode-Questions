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
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        vector<int>size;
        DFS(root,size);
        sort(size.begin(), size.end(), greater<int>());
        if(k > size.size()) return -1;
        else return size[k-1];
    }
   pair<bool,int> DFS(TreeNode* root, vector<int>&size){
        if(root == NULL){
            return {true ,0};
        }
    pair<bool,int> L = DFS(root->left,size);
    pair<bool,int> R = DFS(root->right,size);

    if((L.first == true && R.first == true) && (L.second == R.second)){
        int size_ps = L.second + R.second +1;
        size.push_back(size_ps);
        return {true,size_ps};
    }
    return {false, 0};

    }

};