#include <iostream>
using namespace std;
# include<bits/stdc++.h>
vector<string> superset(vector<string> &v1,string s,int l,string s1,int n)
{

    if(l==n)
        return v1;
    v1=superset(v1,s,l+1,s1,n);
    v1.push_back(s1+s[l]);
    v1=superset(v1,s,l+1,s1+s[l],n);
    return v1;
}
int main() {
    string s;
    cin>>s;
    string s1="";
    vector<string>v2;
    v2=superset(v2,s,0,s1,s.size());
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<endl;
    }
}
