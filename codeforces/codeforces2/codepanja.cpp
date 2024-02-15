#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    while(q--)
    {
        ll f,s;
        cin>>f>>s;
        ll ss=lower_bound(a.begin(),a.end(),f)-a.begin();
        ll ff=lower_bound(a.begin(),a.end(),s)-a.begin();
        if(a[ff]==s)
        {
            cout<<ff-ss+1<<endl;

        }
        else cout<<ff-ss<<endl;


    }
    return 0;
}
