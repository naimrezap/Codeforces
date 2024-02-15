#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll s=0;
void check(ll w)
{
    if(w% (ll)sqrt(w)==0)
        s++;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       3*ll l,r;
       cin>>l>>r;
       for(ll i=l;i<=r;i++)
       {
           check(i);
       }
       cout<<s<<endl;
       s=0;
    }


    return 0;
}
