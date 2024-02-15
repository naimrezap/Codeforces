#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        ll m=v[n-1];
        int i=n-2;
        while(m>0 && i>=0)

        {
            m-=v[i];
            i--;

        }
        if(v[n-1]==0)
            cout<<0<<endl;
        else if(m<=0)
        {
            cout<<1<<endl;
        }
        else cout<<m<<endl;
    }
    return 0;
}
