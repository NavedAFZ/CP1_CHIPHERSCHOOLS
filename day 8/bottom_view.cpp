
// Method that returns the bottom view.
 map<int,pair<int,vector<int>> > ans( map<int,pair<int,vector<int>> >&m1,Node *root,int d,int l)
 {
     if(root==NULL)
        return m1;
     if(m1.count(d)==0)
     {
         vector<int>v2(2);
         v2[0]=l;
         v2[1]=d;
         m1[d]=make_pair(root->data,v2);
     }
       else if(m1[d].second[0]==l)
     {
         vector<int>v2(2);
         v2=m1[d].second;
         if(d>v2[1])
         {
             v2[1]=d;
         }
         m1[d]=make_pair(root->data,v2);
     }
     else if(m1[d].second[0]<l)
     {
         vector<int>v2(2);
        v2[0]=l;
        v2[1]=d;
         m1[d]=make_pair(root->data,v2);
     }
     m1=ans(m1,root->left,d-1,l+1);
     m1=ans(m1,root->right,d+1,l+1);
     return m1;
 }

vector <int> bottomView(Node *root)
{
    vector <int> v1;
    map<int,pair<int,vector<int>> >m1;
    m1=ans(m1,root,0,0);
    for(auto i=m1.begin();i!=m1.end();i++)
    {
        v1.push_back(i->second.first);

    }
    return v1;
   // Your Code Here
}
