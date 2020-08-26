# include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
};
Node *newNode(int key)
{
    Node *temp = new Node;
    temp->key  = key;
    temp->left  = temp->right = NULL;
    return (temp);
}
map<int,vector<int> > vertical(map<int,vector<int> >&m,Node *root, int n)
{
    if(root==NULL)
        return m;
    m[n].push_back(root->key);
    m=vertical(m,root->left,n-1);
    m=vertical(m,root->right,n+1);
    return m;
}



int main()
{

  Node *root        = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(6);
    root->left->left  = newNode(3);
    root->left->right = newNode(4);
    root->right->left  = newNode(7);
    root->right->right = newNode(8);
    map<int,vector<int> >m1;
    m1=vertical(m1,root,0);
    for(auto i=m1.begin();i!=m1.end();i++)
    {
        cout<<i->first<<" - ";
        vector<int>v1=i->second;
        for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        cout<<endl;
    }
    //top_view(root);
}
