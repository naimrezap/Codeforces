#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int p,cost=0;
       string s;
       cin>>s;
       cin>>p;
       int n=s.size();
       vector<pair<char,int>>v;
       for(int i=0;i<n;i++)
       {
           v.push_back({s[i],i});
           cost+=s[i]-96;
                  }
          vector<int>v2(n,0);
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--)
        {
            if(cost<=p) break;
            else{
                cost-=v[i].first-96;
                v2[v[i].second]=-1;
            }

        }
        for(int i=0;i<n;i++)
        {
            if(v2[i]==0)
                cout<<s[i];

        }
        cout<<endl;
    }
    return 0;
}
