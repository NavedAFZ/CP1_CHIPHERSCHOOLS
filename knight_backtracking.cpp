

# include<bits/stdc++.h>
using namespace std;
//#define n 8
const int n=8;
bool is_safe(int v1[n][n], int r,int c, int n)
{
    if(v1[r][c]==-1 && r>=0 && r<n && c>=0 && c<n)
        return true;
    else
    return false;
}
bool knight(int v1[n][n], int x[],int y[],int m,int r,int c,int n)
{
    int nx,ny,k;
    if(m==n*n)
        return true;
    for( k=0;k<8;k++)
    {
        nx=r+ x[k];
        ny=c+ y[k];
        if(is_safe(v1,nx,ny,n))
        {
            v1[nx][ny]=m;
            if(knight(v1,x,y,m+1,nx,ny,n))
                return true;
            else
            v1[nx][ny]=-1;
        }
    }
    return false;
}

int main()
{

//   vector<vector<int> >v1(n, vector<int>(n,-1) );
int v1[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        v1[i][j]=-1;
    }
}
    // int x_m[]={2,2,-2,-2,1,1,-1,-1};
     //int y_m[]={1,-1,1,-1,2,-2,2,-2};
    int x_m[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int y_m[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
     v1[0][0]=0;
     int Move=1;
     bool a1=knight(v1,x_m,y_m,Move,0,0,n);





 if(a1)
 {


   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<v1[i][j]<<" ";
       }
       cout<<endl;
   }
 }
 else
    cout<<"no";
}
