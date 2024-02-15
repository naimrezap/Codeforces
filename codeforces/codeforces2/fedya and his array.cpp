#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;

        cout<<2*(x-y)<<endl;
        for(ll i=y+1;i<=x;i++)
            cout<<i<<" ";
        for(ll i=x-1;i>=y;i--)
            cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}
