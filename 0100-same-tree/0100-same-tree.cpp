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
    bool leftsame(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL) return true;
        if(root1 == NULL || root2 == NULL) return false;
        if(root1->val != root2->val) return false;
        bool c1 = leftsame(root1->left,root2->left);
        bool c2 = leftsame(root1->right, root2->right);
        return c1&&c2;
    }
public:
    bool rightsame(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL) return true;
        if(root1 == NULL || root2 == NULL) return false;
        if(root1->val != root2->val) return false;
        bool c1 = rightsame(root1->left,root2->left);
        bool c2 = rightsame(root1->right,root2->right);
        return c1&&c2;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)return true;
        if(p == NULL || q == NULL)return false;
        if(p->val != q->val) return false;
        bool c1 = leftsame(p->left, q->left);
        bool c2 = rightsame(p->right, q->right);

        return c1&&c2;
    }
};