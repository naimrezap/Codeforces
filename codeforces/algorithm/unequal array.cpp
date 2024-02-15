#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ss=-1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
               ss=i+1;
               break;
            }
        }
        ll ss1=-1;
        for(int i=n-1;i>0;i--)
        {
            if(v[i]==v[i-1] && (i-1)>=ss)
            {
               ss1=i-1;
               break;
            }
        }
        if(ss1==ss && ss>0)
            cout<<1<<endl;
        else if(ss==-1 && ss1==-1)
            cout<<0<<endl;
        else if(ss==-1 || ss1==-1)
            cout<<0<<endl;
        else
            cout<<ss1-ss<<endl;

    }
    return 0;
}
