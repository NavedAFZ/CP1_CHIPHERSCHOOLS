
class solver
{
private:

public:
Node* ifNodeExists( Node* node, int key)
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
void downNodes(vector<int> &v1,Node *root,int k,int i)
{
    if(root==NULL)
        return ;
        if(i==k)
        v1.push_back(root->data);
    downNodes(v1,root->left,k,i+1);
    downNodes(v1,root->right,k,i+1);

}
int upNodes(vector<int>&v1, Node *root,Node *n1,int k)
{
    if(root==NULL)
    return -1;
    if(root==n1)
    {
        downNodes(v1,root,k,0);
        return 0;
    }
    int d1=upNodes(v1,root->left,n1,k);
    if(d1!=-1)
    {
        if(d1+1==k)
        v1.push_back(root->data);
        else
        downNodes(v1,root->right,k-d1-2,0);

        return d1+1;
    }
    int d2=upNodes(v1,root->right,n1,k);
    if(d2!=-1)
    {
        if(d2+1==k)
        v1.push_back(root->data);
        else
        downNodes(v1,root->left,k-d2-2,0);

        return d2+1;
    }
    return -1;
}

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        vector<int>v1;
        if(root==NULL)
        return v1;
        Node *n1=ifNodeExists(root,target);
        if(n1!=NULL)
        {
            upNodes(v1,root,n1,k);
            sort(v1.begin(),v1.end());
            return v1;
        }


    }
};
