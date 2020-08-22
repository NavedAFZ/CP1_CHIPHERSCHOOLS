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

int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL)
  return 0;
  if(root->left==NULL && root->right==NULL)
  return 1;
  int h1=countLeaves(root->left);
  int h2=countLeaves(root->right);
  return (h1+h2);
}
