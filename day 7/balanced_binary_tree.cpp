int height(Node *root)
{
    if(root==NULL)
    return 0;
    return (1+max(height(root->left),height(root->right)));
}
bool isBalanced(Node *root)
{   if(root==NULL)
    return 1;
    int h1=height(root->left);
    int h2=height(root->right);
    if(abs(h1-h2)>1)
    return 0;
    return (isBalanced(root->left)&&isBalanced(root->right));


}
