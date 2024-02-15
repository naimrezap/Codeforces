#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        vector<int>v[n];
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            for(int j=0;j<x;j++)
            {
                cin>>v[i][j];
            }
           // sort(v[i].begin(),v[i].end());
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<v[i].size()-1;j++)
            {
                if(v[i+1][j]!=v[i][j])
                    a.push_back(v[i][j]);
            }
        }
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
