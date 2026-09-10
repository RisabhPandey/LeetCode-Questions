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
    int minCameraCover(TreeNode* root) {
         int camera = 0;
        if(DFS(root,camera) == -1){
            camera++;
        }
        return camera;
    }
    public:
     int DFS(TreeNode* root, int &camera){
        if(root == NULL) return 1;

        int l = DFS(root->left,camera);
        int r = DFS(root->right,camera);

        if(l == -1 || r == -1){
            camera++;
            return 0;
        }
        else if(l == 0 || r == 0){
            return 1;
        }
        else{
            return -1;
        }

    }
};