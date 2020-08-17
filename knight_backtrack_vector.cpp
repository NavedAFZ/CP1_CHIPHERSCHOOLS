

# include<bits/stdc++.h>
using namespace std;

bool is_safe(vector<vector<int> >&v1,int r,int c,int n)
{
  //  cout<<2<<endl;
    return( r>=0 && r<n && c>=0 && c<n && v1[r][c] == -1 );
}
bool moves(vector<vector<int> >&v1,int x[],int y[],int m,int r,int c,int n)
{
    int mx,my,k;
 //   cout<<m<<endl;
    if(m==n*n)
        return true;
     //   cout<<"+"<<endl;
    for( k=0;k<8;k++)
    {
        mx=r+x[k];
        my=c+y[k];

        if(is_safe(v1,mx,my,n))
        {
            v1[mx][my]=m;
            if(moves(v1,x,y,m+1,mx,my,n))
                return true;
            else

            v1[mx][my] = -1;

        }
    }
    return false;
}

void knight(vector<vector<int> >&v1,int n)
{
    int x_move[8]={ 2, 1, -1, -2, -2, -1, 1, 2 };
    int y_move[8]={ 1, 2, 2, 1, -1, -2, -2, -1 };
    v1[0][1]=0;
    cout<<"*"<<endl;
    bool a1=moves(v1,x_move,y_move,1,0,1,n);
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
    else{
        cout<<"No"<<endl;
    }
}
int main()
{
int n;
cin>>n;
   vector<vector<int> >v1(n, vector<int>(n,-1) );


   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<v1[i][j]<<" ";
       }
       cout<<endl;
   }

   knight(v1,n);
}
