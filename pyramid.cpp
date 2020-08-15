# include<bits/stdc++.h>
using namespace std;
/*** FOR INCREASING ***/
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
/*** FOR DECREASING ***/
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
