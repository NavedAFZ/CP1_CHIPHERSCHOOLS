// Return 1 if all the nodes in the tree satisfy the given property. Else return 0
int isSumProperty(Node *root)
{
 // Add your code here
 if(root==NULL )
 return 1;
 if(root->left!=NULL && root->right!=NULL)
 {
     if(root->left->data+root->right->data!=root->data)
     return 0;
 }
 if(root->left!=NULL && root->right==NULL)
 {
     if(root->left->data!=root->data)
     return 0;
 }
 if(root->right!=NULL && root->left==NULL)
 {
     if(root->right->data!=root->data)
     return 0;
 }
 return(isSumProperty(root->right)&&isSumProperty(root->left) );
}
