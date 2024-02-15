#include<bits/stdc++.h>
#define  ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        if(a>b)
            cout<<1<<endl;
        else if(n%a==0)
            cout<<n/a<<endl;
            else
            cout<<n/a+1<<endl;

    }

    return 0;
}
