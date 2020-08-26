void image(TreeNode* root)
    {
        if(root==NULL)
            return;
        image(root->left);
        image(root->right);
        TreeNode *temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    TreeNode* invertTree(TreeNode* root) {

        image(root);
        return root;
    }
