
class Solution {
public:
    bool helper(TreeNode* root, int sum, int targetSum) {
        if(root == NULL)
            return false;

        sum += root->val;

        // Check only when we reach a leaf
        if(root->left == NULL && root->right == NULL) {
            return sum == targetSum;
        }

        bool left = helper(root->left, sum, targetSum);
        bool right = helper(root->right, sum, targetSum);

        return left || right;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, 0, targetSum);
    }
};
