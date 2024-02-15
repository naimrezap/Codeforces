
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

 int n,m;
 cin>>n>>m;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
     cin>>v[i];
 }
int ans=0;

 while(m--)
 {
     int a,b;
     cin>>a>>b;
     ans+=v[a-1];
 }
 cout<<ans<<endl;

    return 0;
}
