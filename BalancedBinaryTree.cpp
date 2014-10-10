class Solution {
public:
    bool isBalanced(TreeNode *root, int & height)
    {
        if (root == NULL){
            height = 0;
            return true;
        }
        height += 1;
        int leftHeight=0, rightHeight=0;
        bool isLeft = isBalanced(root->left, leftHeight);
        bool isRight = isBalanced(root->right, rightHeight);
        height += max(leftHeight, rightHeight);
        return (isLeft && isRight && (abs(leftHeight-rightHeight)<=1));
    }
    
    bool isBalanced(TreeNode *root)
    {
        int height=0;
        return isBalanced(root, height);
    }
};
