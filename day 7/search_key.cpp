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

// Function to traverse the tree in preorder
// and check if the given node exists in it
Node* ifNodeExists(struct Node* node, int key)
{
    if (node == NULL)
        return NULL;

    if (node->data == key)
        return node;

    /* then recur on left sutree */
    Node* res1 = ifNodeExists(node->left, key);

    if(res1!=NULL) return res1; // node found, no need to look further

    /* node is not found in left, so recur on right subtree */
    Node* res2 = ifNodeExists(node->right, key);

    return res2;
}
int distance(struct Node* node, struct Node* node1,int k)
{
    if (node == NULL)
        return -1;

    if (node == node1)
        return k;

    /* then recur on left sutree */
    int res1 = distance(node->left,node1,k+1);

    if(res1!=-1) return res1; // node found, no need to look further

    /* node is not found in left, so recur on right subtree */
    int res2 = distance(node->right,node1,k+1);

    return res2;
}
vector<int> all_node(vector<int> &v1,Node *root,int k,int i)
{
    if(root==NULL)
        return v1;
        if(i==k)
        v1.push_back(root->data);
    v1=all_node(v1,root->left,k,i+1);
    v1=all_node(v1,root->right,k,i+1);
    return v1;
}
// Driver Code
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

   /* int key = 4;

    Node* n1=(ifNodeExists(root, key));
    if(n1!=NULL)
        cout << n1->data;
    else
        cout << "NO";

    if(n1!=NULL)
    {
        int k1=distance(root,n1,0);
        cout<<k1<<endl;
    }*/
vector<int>v1;
v1=all_node(v1,root,2,0);
for(int i=0;i<v1.size();i++)
{

    cout<<v1[i]<<" ";
}
    return 0;
}
