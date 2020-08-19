#include <iostream>
using namespace std;
# include<bits/stdc++.h>
int minSwaps(int arr[], int N,int k){

    /*Your code here */
    vector<pair<int,int> >v1(N);
    for(int i=0;i<N;i++)
    {
        v1[i].first=arr[i];
        v1[i].second=i;

    }
    sort(v1.begin(),v1.end());
    vector<bool> v(N,false);
    int ans=0;
    for(int i=0;i<N;i++)
    {
        if(v[i]==true||v1[i].second==i)
        continue;
        int j=i;
        int c=0;
        bool a1=false;

        while(!v[j])
        {
            if(v1[j].first<=k)
            a1=true;
            v[j]=1;
            j=v1[j].second;
            c++;
        }
        if(a1)
        {
        if(c>0)
        {
            ans+=(c-1);
        }
        }
        a1=false;

    }
    return ans;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;

	int a[n];
	//long long int s=0,ls=0,rs=s;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	  //  s+=a[i];
	}
	int k;
	cin>>k;
	int a11=minSwaps(a,n,k);
	cout<<a11<<endl;
	}
}


