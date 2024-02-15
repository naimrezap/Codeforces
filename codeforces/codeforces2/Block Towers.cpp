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
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            ll tem=a[0];
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(tem<a[i])
            {
                while(a[i]>tem)
                {
                    tem++;
                    a[i]--;
                }
            }

        }
        cout<<tem<<endl;

    }
    return 0;
}
