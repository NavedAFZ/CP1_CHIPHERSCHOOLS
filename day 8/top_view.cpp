 map<int,pair<int,int> > ans( map<int,pair<int,int> >&m1,Node *root,int d,int l)
 {
     if(root==NULL)
        return m1;
     if(m1.count(d)==0)
     {
         m1[d]=make_pair(root->key,l);
     }
     else if(m1[d].second>l)
     {
         m1[d]=make_pair(root->key,l);
     }
     m1=ans(m1,root->left,d-1,l+1);
     m1=ans(m1,root->right,d+1,l+1);
     return m1;
 }
void top_view(Node *root)
{
    map<int,pair<int,int> >m1;
    m1=ans(m1,root,0,0);
    for(auto i=m1.begin();i!=m1.end();i++)
    {
        cout<<i->second.first<<" ";

    }

}
