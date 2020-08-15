# include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector< vector<int> >v1(numRows);

        int s=1;
        for(int i=0;i<numRows;i++)
        {
            v1[i].resize(s);
            for(int j=0;j<s;j++)
            {
                if(j==0 || j==s-1)
                {
                    v1[i][j]=1;

                }
                else
                {
                    v1[i][j]=v1[i-1][j]+v1[i-1][j-1];
                }
            }
            s++;
        }
        return v1;

    }
    int main()
    {
        int n;
        cin>>n;
        vector<vector<int>> v1=generate(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<v1[i].size();j++)
            {
                cout<<v1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
