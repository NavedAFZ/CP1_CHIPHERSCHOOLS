# include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

};
Node* ifNodeExists( Node* node, int key,Node *prev)
{
    if (node == NULL)
        return NULL;

    if (node->data == key)
        return prev;

    /* then recur on left sutree */
     prev=node;
    Node* res1 = ifNodeExists(node->left, key,prev);

    if(res1!=NULL) return res1; // node found, no need to look further

    /* node is not found in left, so recur on right subtree */
    Node* res2 = ifNodeExists(node->right, key,prev);

    return res2;
}
Node* newNode(int key)
{
    Node* node = new Node;
    node->data = key;
    node->left = node->right = NULL;
    return (node);
}
int dis(Node *root, int s1,int s)
{
    if(root==NULL)
        return -1;
    if(root->data==s1)
        return s;
    int a1=dis(root->left,s1,s+1);
    if(a1!=-1)
        return a1;
    return dis(root->right,s1,s+1);
}
 bool isCousins(Node* root, int x, int y) {
     if(root==NULL)
        return 0;
     TreeNode* t1=*t2=*t3=root;
    TreeNode *n1=ifNodeExists(root,x,NULL);
    TreeNode *n2=ifNodeExists(t1,y,NULL);
    if(n1==n2)
        return 0;
    else
    {
        int a1=dis(t2,x,0);
        int a2=dis(t3,y,0);
        if(a1==a2)
            return 1;
        else
            return 0;
    }

    }
int main()
{
     Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    int s=0;
    Node *n1=ifNodeExists(root,3,NULL);
    cout<<n1->data<<endl;
    int a1=dis(root,3,0);
    cout<<a1<<endl;
}
