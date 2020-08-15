#include <iostream>
# include<bits/stdc++.h>
using namespace std;
int gen(int a[],int n,int s)
{
    //vector< vector<int> >v1;
    int v1[s+1][n+1];
    for(int j=0;j<n+1;j++)
    {
        v1[0][j]=1;
    }
    for(int j=1;j<s+1;j++)
        v1[j][0]=0;
    int x,y;
    for(int i=1;i<s+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            x=(i-a[j-1]>=0)?v1[i-a[j-1]][j]:0;
            y=(j>=1)?v1[i][j-1]:0;
            v1[i][j]=x+y;
        }

    }
    return v1[s][n];
    //return ans;
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
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int sum;
	    cin>>sum;
	    int a2=gen(a,n,sum);
	    cout<<a2<<endl;
	}
	return 0;
}
