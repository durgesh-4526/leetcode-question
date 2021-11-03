class Solutions {
public:
    void check(TreeNode * root,int count,int &ans)
    {
        if(!root)
        {
            return;
        }
        count *= 10;
        count += root->val;
        if(!root->left && !root->right)    
        {
            ans += count;
        }
        if(root->left)check(root->left,count,ans);
        if(root->right)check(root->right,count,ans);
        
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        check(root,0,ans);
        return ans;
    }
};
