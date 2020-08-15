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
        if(i==0||i==rows-1)
        {
        for(int k=0;k<rows;k++)
        {
            cout<<"*";
        }
        }
        else
        {
            for(int k=0;k<rows;k++)
            {
                if(k==0||k==rows-1)
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
