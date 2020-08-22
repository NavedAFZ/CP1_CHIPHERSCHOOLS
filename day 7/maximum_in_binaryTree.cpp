# include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *right;
Node *left;
Node(int d)
{
    data=d;
    left=NULL;
    right=NULL;
}
};

// Returns maximum value in a given Binary Tree
int findMax(struct node* root)
{
// Your code goes here
if(root==NULL)
return 0;
int h1=findMax(root->left);
int h2=findMax(root->right);
int h3=max(h1,h2);
return max(root->data,h3);
}

// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
// Your code goes here

if(root==NULL)
return INT_MAX;
int h1=findMin(root->left);
int h2=findMin(root->right);
int h3=min(h1,h2);
return min(root->data,h3);
}
