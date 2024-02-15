#include<bits/stdc++.h>
#define  ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
     ll m=1000000007;
    while(t--)
    {
        ll n,sum=0,k=1;
        cin>>n;
        n%=m;

        sum=(((n*(n+1))%m)*(((4*n)%m-1)%m)/6)%m;

        sum%=m;
        cout<<(sum*2022)%m<<endl;

    }
    return 0;
}
