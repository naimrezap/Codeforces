#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()

{
    ll n,m,k,c=0,t=INT_MAX;
    cin>>n>>m>>k;
    ll b[m];
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];


    }
    for(int i=0; i<m; i++)
        cin>>b[i];
    sort(v.begin(),v.end());
    sort(b,b+m);
    int j=0,i=0;
     while(i<m)
     {
         while(j<n)
         {
             if((abs(b[i]-v[j]))<=k)
             {
                 c++;
                 i++;
                 break;
             }
         }
         j++;
     }
    cout<<c<<endl;

    return 0;
}
