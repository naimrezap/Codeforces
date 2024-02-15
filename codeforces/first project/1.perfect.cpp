
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,p,m=0,r=0;
        cin>>n;
      n=n-1;
        vector<ll>v(n),v1(n+1);
        for(int i=0;i<n;i++)
            cin>>v[i];
        v1[0]=v[0];
        v1[n]=v[n-1];
        for(int i=0;i<n-1;i++)
        {
            v1[i+1]=min(v[i],v[i+1]);
       // cout<<v1[i+1]<<endl;
        }
        for(int i=0;i<n+1;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}

