# include<bits/stdc++.h>
using namespace std;
/*** FOR hollow rhombus ***/
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-1-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<rows;k++)
        {
            cout<<"*";
        }



        cout<<endl;
    }
}
