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
void rightView(Node *root)
{
   // Your code here
       if(root==NULL)
        return;
//     vector<vector<int> >v1;
  //   int j=0;
     queue<Node *>q;
     q.push(root);
     while(!q.empty())
     {
         int n=q.size();
         for(int i=0;i<n;i++)
         {

             Node *temp=q.front();
             q.pop();
             if(i==n-1)
             cout<<temp->data<<" ";
             if(temp->left!=NULL)
             {
                 q.push(temp->left);
             }
             if(temp->right!=NULL)
             {
                 q.push(temp->right);
             }
         }
     }
}
