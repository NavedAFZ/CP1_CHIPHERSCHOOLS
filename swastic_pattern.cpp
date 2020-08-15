# include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    if(rows%2==0)
    {
        return 0;
    }
    for(int i=0;i<rows;i++)
    {
      if(i==0)
      {
          for(int k=0;k<rows;k++)
          {
              if(k==0||k>=(rows/2))
              {
                  cout<<"*";
              }
              else
                cout<<" ";
          }
      }
      else if(i==(rows/2))
      {
          for(int k=0;k<rows;k++)
            cout<<"*";
      }
      else if(i==rows-1)
      {
          for(int k=0;k<rows;k++)
            {
              if(k==rows-1||k<=(rows/2))
              {
                  cout<<"*";
              }
              else
                cout<<" ";
          }

      }
      else if(i>0&&i<(rows/2))
        {
         for(int k=0;k<rows;k++)
         {
             if(k==0||k==(rows/2))
             {
                 cout<<"*";
             }
             else
                cout<<" ";
         }
      }
      else if(i>(rows/2)&&i<(rows-1))
      {
         for(int k=0;k<rows;k++)
         {
             if(k==(rows/2)||k==rows-1)
             {
                 cout<<"*";
             }
             else
                cout<<" ";
         }
      }
        cout<<endl;
    }
}
