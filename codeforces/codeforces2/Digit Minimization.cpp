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
        if(n<100)
        cout<<n%10<<endl;
        else{
            vector<ll>v;
            while(n>0)
            {
                int d=n%10;
                n=n/10;
                v.push_back(d);
            }
            sort(v.begin(),v.end());
            cout<<v[0]<<endl;
        }
    }
    return 0;
}
