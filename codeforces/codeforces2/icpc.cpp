#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        vector<int>v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int ss=0;
        for(int i=0;i<n;i++)
        {
           if(v[0]!=v1[i])
           {
               ss++;
           }
           else
            break;
        }
        cout<<ss<<endl;

    }
    return 0;
}
