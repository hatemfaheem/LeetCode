class Solution {
public:
    bool isValidBST(TreeNode *root, int minValue, int maxValue)
    {
        if (root == NULL)
            return true;
        if (root->val <= minValue || root->val >= maxValue)
            return false;
        return isValidBST(root->left, minValue, root->val) && 
               isValidBST(root->right, root->val, maxValue);
    }
    
    bool isValidBST(TreeNode *root)
    {
        isValidBST(root, INT_MIN, INT_MAX);
    }
};
