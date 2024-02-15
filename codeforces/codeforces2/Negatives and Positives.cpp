#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n,ss=0,neg=0;
       cin>>n;
       vector<ll>v1,v2;
       for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v1.push_back(x);
            if(v1[i]<0)
                neg++;

            ss=ss+abs(v1[i]);
            v2.push_back(abs(v1[i]));


        }
        if(neg%2==1)

        {
            sort(v2.begin(),v2.end());
            ss=ss-(2*(v2[0]));
        }
        cout<<ss<<endl;
    }
    return 0;
}

