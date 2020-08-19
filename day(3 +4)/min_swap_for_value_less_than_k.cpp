#include <iostream>
using namespace std;
# include<bits/stdc++.h>
    vector<bool> ki(vector<int>& candies, int extraCandies) {
        vector<bool>v1(candies.size());
        int m=0;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>m)
                m=candies[i];
        }
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies)>=m)
                v1.push_back(true);
            else
                v1.push_back(false);
        }
        return v1;
    }

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;

	vector<int>nums(n);
	//long long int s=0,ls=0,rs=s;
	for(int i=0;i<n;i++)
	{
	    cin>>nums[i];
	  //  s+=a[i];
	}
	int extra;
	cin>>extra;
vector<bool>v2(n);
	v2=ki(nums,extra);
	for(int i=0;i<n;i++)
	{
	    cout<<v2[i]<<" ";
	  //  s+=a[i];
	}
	cout<<endl;
	//cout<<a11<<endl;
	}
}


