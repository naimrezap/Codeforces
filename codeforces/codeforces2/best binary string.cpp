#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n;
  cin>>n;
     ll ans=1;
     ll p=1;
    while(p<=n)
    {
        ans=ans*2;
        ans=ans%1000000007;
        p++;
    }
    cout<<ans%1000000007<<endl;
    return 0;
}
