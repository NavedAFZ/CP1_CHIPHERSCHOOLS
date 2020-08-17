# include<bits/stdc++.h>
using namespace std;

bool is_safe(vector<vector<int> >&v1,int r,int c,int n)
{
  //  cout<<2<<endl;
    return( r>=0 && r<n && c>=0 && c<n && v1[r][c] == 1 );
    cout<<"*"<<endl;
}
bool check(vector<vector<int> >&user,vector<vector<int> >&sol,int r,int c,int n,int x[],int y[])
{
    int k,x_m,y_m;
    if(r==n-1&&c==n-1)
    {
        return true;
    }
    for(k=0;k<2;k++)
    {
        x_m=r+x[k];
        y_m=c+y[k];
        if(is_safe(user,x_m,y_m,n))
        {
            sol[x_m][y_m]=0;
            if(check(user,sol,x_m,y_m,n,x,y))
                return true;
            else
                sol[x_m][y_m]=-1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int> >user(n, vector<int>(n) );
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>user[i][j];
        }
    }
    vector<vector<int> >sol(n, vector<int>(n,-1) );
    sol[0][0]=0;
    int x_move[2]={0,1};
    int y_move[2]={1,0};
    bool a1=check(user,sol,0,0,n,x_move,y_move);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }

}
