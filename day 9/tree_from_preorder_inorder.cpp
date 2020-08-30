# include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;

};
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}
int fin(int a2[],int num,int l,int r)
{
    for(int i=l;i<=r;i++)
    {
        if(a2[i]==num)
        {
            return i;
        }
    }
}
node *cons(int a1[],int a2[], int l,int r)
{
    static int i=0;
    if(l>r)
    {
        return NULL;

    }

        node *r1=newNode(a1[i++]);


        if(l==r)
            return r1;

         int k=r1->data;
         int n1=fin(a2,k,l,r);
        r1->left=cons(a1,a2,l,n1-1);

        r1->right=cons(a1,a2,n1+1,r);



}
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int n;
    cin>>n;
    int a1[n],a2[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>a2[i];
    }
    node *r1=cons(a1,a2,0,n-1);
    inorder(r1);

}
