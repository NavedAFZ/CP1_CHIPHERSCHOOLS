#include <iostream>
using namespace std;
int gen(int a[],int n,int s)
{
    if(s==0)
    return 1;
    if(s<0)
    return 0;
    if(n<0 && s>=1)
    return 0;

        return (gen(a,n,s-a[n])+gen(a,n-1,s));

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
	    int a2=gen(a,n-1,sum);
	    cout<<a2<<endl;
	}
	return 0;
}
