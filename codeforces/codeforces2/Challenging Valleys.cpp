#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,s=0;
        cin>>n;
        ll a[n];
        vector<ll>v1(n);
        vector<ll>v;
        vector<ll>v2;
        for(int i=0; i<n; i++)
        {
            cin>>v1[i];

        }
        ll m=min_element(v1.begin(),v1.end()) - v1.begin();
        for(int i=m-1; i>=0; i--)
        {
            v.push_back(v1[i]);
        }
        for(int i=m+1; i<n; i++)
        {
            v2.push_back(v1[i]);

        }
        if(is_sorted(v.begin(),v.end()) and is_sorted(v2.begin(),v2.end()))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
