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


