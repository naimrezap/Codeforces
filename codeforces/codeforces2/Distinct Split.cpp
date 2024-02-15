#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m=0;
       cin>>n;
       string s;
       set<char>v,v1;
       vector<int>a,b;
       cin>>s;
       for(int i=n-1;i>=0;i--)
       {
           v.insert(s[i]);
           a.push_back(v.size());
       }
        for(int i=0;i<n;i++)
       {
           v1.insert(s[i]);
           b.push_back(v1.size());
       }
        reverse(a.begin(),a.end());
       for(int i=0;i<n-1;i++)
       {
           int q=a[i+1]+b[i];
           m=max(m,q);
       }
        if(m>n)
            cout<<n<<endl;
        else
       cout<<m<<endl;
    }
    return 0;
}
