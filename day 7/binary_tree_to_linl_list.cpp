#include <iostream>
# include<bits/stdc++.h>
using namespace std;

// Binary tree node
struct Node {
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node* treeToList(Node *root)
{
    if(root==NULL)
        return NULL;
    Node *p=NULL;
    Node *head=NULL;
    stack<Node *>s;
    Node *cur=root;
    while(!s.empty()||cur!=NULL)
    {
        if(cur!=NULL)
        {
            s.push(cur);
            cur=cur->left;
        }
        else
        {
            Node *temp=s.top();
   //         N*a1=temp;
            if(head==NULL)
            {
                head=temp;
              // temp->prev=p;
              temp->left=NULL;
                p=temp;
            }
            else{
                    p->right=temp;
                temp->left=p;
                p=temp;
            }
          //  cout<<temp->data<<" ";
            s.pop();
            if(temp->right!=NULL)
                cur=temp->right;
        }
    }
    p->right=NULL;
    return head;
}
int main()
{
    struct Node* root = new Node(0);
    root->left = new Node(1);
    root->left->left = new Node(3);
    root->left->left->left = new Node(7);
    root->left->right = new Node(4);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    root->right = new Node(2);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    Node *head=treeToList(root);
    cout<<endl;
     while(head!=NULL)
     {

         cout<<head->data<<" ";
         head=head->right;
     }
    return 0;
}
