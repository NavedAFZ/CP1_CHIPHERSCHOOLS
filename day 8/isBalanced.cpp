class Solution {
public:
    int ht(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        return (1+ max(ht(root->left),ht(root->right)));
    }
    bool isBalanced(TreeNode* root) {
       if(root==NULL)
           return 1;
        int h1=ht(root->left);
        int h2=ht(root->right);
        if(abs(h1-h2)>1)
            return 0;
        else
        {
            return isBalanced(root->left)&&isBalanced(root->right);
        }

    }
};
