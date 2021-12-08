class Solution {
public:
    int sum = 0;
    int basic(TreeNode * root){
        if(!root)return 0;
        int left = basic(root->left);
        int right = basic(root->right);
        sum += abs(left-right);
        return root->val+left+right;
    }
    int findTilt(TreeNode* root) {
        basic(root);
        return sum;
    }
};
