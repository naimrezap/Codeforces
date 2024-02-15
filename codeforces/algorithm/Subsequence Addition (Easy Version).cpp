#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        ll s=1,q=1;
        for(ll i=1;i<n;i++)
        {
            if(s<v[i])
            {
                q=0;
                break;
            }
            else {
                s+=v[i];
            }

        }
        if(q==0 || v[0]!=1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
