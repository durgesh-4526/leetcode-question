class Solution {
public:
    void counts(TreeNode *root, int& count)
    {
        if(!root)return;
        count++;
        if(root->left)counts(root->left,count);
        if(root->right)counts(root->right,count);
    }
    int countNodes(TreeNode *root)
    {
        int count = 0;
        if(!root)return count;
        counts(root, count);
        return count;
    }
};
