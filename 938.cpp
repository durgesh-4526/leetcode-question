class Solution {
public:
        void countin(TreeNode* root, int low, int high,int & count)
    {
        if(!root)return;
        if(root->val >= low && root->val <= high)
        {
            count+= root->val;
        }
        if(low < root->val)countin(root->left,low,high,count);
        if(high > root->val)countin(root->right,low,high,count);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int count = 0;
        countin(root,low,high,count);
        return count;
    }
    
};
