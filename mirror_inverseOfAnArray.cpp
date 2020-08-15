# include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        bool a1=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                a1=false;
                break;
            }
        }
        if(a1==true)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}
