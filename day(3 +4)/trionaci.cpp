#include <iostream>
using namespace std;
# include<bits/stdc++.h>
 int recur(int n) {
     int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<n+1;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
            int a=dp[n];
        return a;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int a=recur(n);
	cout<<a<<endl;
	}
}
