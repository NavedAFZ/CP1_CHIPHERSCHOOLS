# include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data=data;
        this->left = this->right = NULL;
    }
};
int height(Node* root)
{
   if(root==NULL)
   return 0;
   return(1+ max((height(root->left)),(height(root->right))));
}
int diameter(Node* root) {
    // Your code here

    if(root==NULL)
    return 0;
     int h1=height(root->right);
     int h2=height(root->left);
     int d1=diameter(root->right);
     int d2=diameter(root->left);
    return(max(max(d1,d2),1+h1+h2));
}

