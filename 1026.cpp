class Solution {
public:
    int helper(TreeNode * root,int maxi, int mini){
        if(!root)return abs(maxi-mini);
        maxi = max(maxi, root->val);
        mini = min(mini,root->val);
        return max(helper(root->left,maxi,mini),helper(root->right,maxi,mini));
    }
    int maxAncestorDiff(TreeNode* root) {
        return helper(root,0,INT_MAX);
    }
};
