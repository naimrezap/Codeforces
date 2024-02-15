#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll l,r,p=0;
        cin>>l>>r;
        set<ll>v;
        ll a[l];
        for(int i=0;i<l;i++)
        {

            cin>>a[i];
            v.insert(a[i]);
        }
       ll siz=v.size();
       for(int i=0;i<siz;i++)
       {
           if(siz-(a[i]-r)>=siz/2)
            p++;
       }
       cout<<p<<endl;

    }
    return 0;
}
