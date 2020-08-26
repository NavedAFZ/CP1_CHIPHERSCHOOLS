class Solution {
public:

    bool mirror(TreeNode *t1, TreeNode *t2)
    {
        if(t1==NULL && t2==NULL)
            return 1;
        if(t1&&t2&&t1->val==t2->val)
            return (mirror(t1->left,t2->right)&&mirror(t1->right,t2->left));
        return false;
    }
    bool isSymmetric(TreeNode* root) {
    return mirror(root,root);
    }
};
