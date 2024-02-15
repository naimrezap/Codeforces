#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,x,ans=-1;
      cin>>n;
      vector<int>b;
      map<int, int> mapp;
      for(int i=0;i<n;i++)
      {
        cin>>x;
        mapp[x]=i;
      }
      for(auto x:mapp)
      {
          b.push_back(x.first);
      }
      for(int i=0;i<b.size();i++)
      {
          for(int j=i;j<b.size();j++)
          {
              if(__gcd(b[i],b[j])==1)
              {
                 ans=max(mapp[b[i]]+mapp[b[j]]+2,ans) ;
              }
          }
      }
      cout<<ans<<endl;

    }

    return 0;
}
