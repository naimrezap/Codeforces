#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c,sum=0,tt=0;
        cin>>n>>c;
        vector<ll>v(n+1);

        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<=n;i++)
        {
          v[i]=v[i]+i;
        }
        sort(v.begin(),v.end());
        for(int i=1;i<=n;i++)
        {
          sum=sum+v[i];
          if(sum<=c)
          {
              tt++;
              //c=c-sum;
          }
          else break;
        }
        cout<<tt<<endl;
    }

}
