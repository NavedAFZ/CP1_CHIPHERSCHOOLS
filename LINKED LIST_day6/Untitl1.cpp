# include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,m;
    cin>>n>>m;
      long long int a[n],b[m];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(int i=0;i<m;i++)
      {
          cin>>b[i];
      }
      long long int minn=INT_MAX,ans;
      bool a1=false;
      for(int i=0;i<n;i++)
      {
          if(a1==false)
          {


          for(int j=0;j<m;j++)
          {
                  ans=a[i] & b[j];
                  if(ans<minn)
                    minn=ans;

          }
          cout<<minn<<endl;
          a1=true;
          }
          else{
            for(int j=0;j<m;j++)
          {
                  ans=minn |(a[i] & b[j]);
                  if(ans<minn)
                    minn=ans;

          }
          cout<<minn<<endl;
          }
      }
      cout<<minn<<endl;

}
