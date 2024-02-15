#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,sum=0;
    cin>>n;
    ll a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum+=a[i];

    }
    cout<<((n*(n+1))/2)-sum<<endl;
    return 0;
}
