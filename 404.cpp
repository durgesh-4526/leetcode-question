class Solution {
public:
    int sum;
    void sums(TreeNode *root)
    {
        if(!root) return;
        if(root->left)
        {
            if(!root->left->right && !root->left->left)
            {
                sum += root->left->val;
            }
        }
        if(root->left)
        {
            sums(root->left);
        }
        if(root->right)
        {
            sums(root->right);
        }
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        sums(root);
        return sum;
    }
};
