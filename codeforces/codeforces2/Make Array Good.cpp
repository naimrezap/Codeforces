#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s=0,r;
        cin>>n;
        ll a[n];
        vector<ll>v;
        vector<ll>v1;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            ll r=1;
               while(r<a[i])
               {
                   r=r*2;
               }
               cout<<i+1<<" "<<r-a[i]<<endl;



        }

    }











    return 0;
}
