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
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        ll s=*max_element(b,b+n);
        ll s2=*max_element(b,b+n-1);
        for(ll i=0;i<n;i++)
        {
            if(a[i]==s)
                cout<<s-s2<<" ";
                else
                    cout<<a[i]-s<<" ";

        }
        cout<<endl;
    }

    return 0;
}
