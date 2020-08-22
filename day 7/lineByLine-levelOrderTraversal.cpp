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
vector<vector<int> >LevelOrder(Node *root)
{
    if(root==NULL)
        return;
     vector<vector<int> >v1;
     int j=0;
     queue<Node *>q;
     q.push(root);
     while(!q.empty())
     {
         int n=q.size();
         for(int i=0;i<n;i++)
         {
             Node *temp=q.front();
             q.pop();
             v1[j][i]=temp->data;
             j++;
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
     return v1;
}
