#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s=0;
        cin>>n;
        ll a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n%2==1)
            s=1;
        else
        {
            for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if((a[i]-2)!=i)
                {
                    s=1;
                    break;
                }
            }
            else{
                if(a[i]!=i)
                {
                    s=1;
                    break;
                }
            }

        }
        }
        if(s==1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
