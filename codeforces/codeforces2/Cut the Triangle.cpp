#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        set<ll>v;
          set<ll>v1;
        for(int i=0;i<3;i++)
        {
          ll s,n;
          cin>>s>>n;

          v.insert(s);
          v1.insert(n);

        }
        if((v.size())<=2 && (v1.size())<=2)
            cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
return 0;
}
