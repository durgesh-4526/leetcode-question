class Solution {
public:
    int util(TreeNode * root)
    {
        if(!root->right)
        {
            return root->val;
        }
        return util(root->right);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return NULL;
        if(root->val == key)
        {
            if(!root->left && !root->right)return NULL;
            if(root->left && root->right)
            {
                int temp = util(root->left);
                root->val = temp;
                root->left = deleteNode(root->left,temp);
                return root;
            }
            if(root->left) return root->left;
            if(root->right) return root->right;
        }
        else 
            if(key>root->val){
                root->right = deleteNode(root->right,key);
            }
        else{
            root->left = deleteNode(root->left,key);
        }
        return root;
    }
};
