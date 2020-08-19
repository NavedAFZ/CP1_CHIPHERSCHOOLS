#include <iostream>
using namespace std;
# include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;

	long long int a[n];
	long long int s=0,ls=0,rs=s;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    s+=a[i];
	}
	rs=s;
	if(n==1)
	{
	    cout<<1<<endl;
	    //continue;
	}
	else
	{
	bool a1=true;
	for(int i=0;i<n;i++)
	{
	    if(i-1>=0)
	    {
	        ls=ls+a[i-1];
	        rs=rs-a[i];
	    }
	    else
	    {
	        rs=rs-a[i];
	    }
	   // cout<<ls<<" "<<rs<<endl;
	    if(ls==rs)
	    {
            a1=false;
	        cout<<i+1<<endl;

	        break;
	    }
	}
	if(a1==true)
	cout<<-1<<endl;
	}
	}
	return 0;
}
