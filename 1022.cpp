class Solution {
public:
    int total =0;
    void sum(TreeNode *root, int current)
    {
        if(!root)return;
        current *=2;
        current += root->val;
        if(!root->left && !root->right)
        {
            total += current;
        }
        if(root->left)
        {
           sum(root->left,current);
        }
        if(root->right)
        {
           sum(root->right,current);
        }
    }
    int sumRootToLeaf(TreeNode *root)
    {
        sum(root, 0);
        return total;
    }
    
};
