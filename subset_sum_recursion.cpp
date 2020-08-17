# include<bits/stdc++.h>
using namespace std;
bool Find(int a[],int n,int s)
{
    if(s==0)
    {

        return true;
    }
    if(s<0 || n==0)
    {
        return false;
    }
    return (Find(a,n-1,s-a[n-1]) || Find(a,n-1,s) );

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    bool a1=Find(a,n,sum);
    if(a1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
