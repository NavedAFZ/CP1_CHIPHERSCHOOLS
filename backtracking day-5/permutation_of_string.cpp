#include <iostream>
using namespace std;
# include<bits/stdc++.h>
vector<string> permutation(vector<string> &v1,string s,int l,int r)
{

    if(l==r)
        v1.push_back(s);
    for(int i=l;i<=r;i++)
    {
        swap(s[l],s[i]);
        v1=permutation(v1,s,l+1,r);
        swap(s[l],s[i]);
    }
    return v1;
}
int main() {
    string s;
    cin>>s;
    vector<string>v2;
    v2=permutation(v2,s,0,s.size()-1);
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<endl;
    }
}
