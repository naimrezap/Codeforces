
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
        vector<ll> a(n);
        set<ll>v1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            v1.insert(a[i]);
        }
        if(v1.size()==2)
        {
            if(abs(a[0]-a[1])==2)
                cout<<(a[0]+a[1])/2<<endl;
            else cout<<-1<<endl;
        }
        else {
            if(is_sorted(a.begin(),a.end()))
        {
            cout<<0<<endl;}

            else
            {
                reverse(a.begin(),a.end());
                if(is_sorted(a.begin(),a.end()))
                    cout<<a[0]+a[n-1]<<endl;
                else
                    cout<<-1<<endl;
            }


        }
    }
    return 0;
}

