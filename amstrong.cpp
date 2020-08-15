# include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int n;
    cin>>n;
    ll int k1=n;
    if(n==0||n==1)
    {
        cout<<"Yes"<<endl;
    }
    else{
            ll int sum=0;
        while(n>0)
        {
            ll int rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(sum==k1)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    }
}
