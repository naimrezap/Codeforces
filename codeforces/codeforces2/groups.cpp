#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        ll a[n][5];
        vector<ll>v(5,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    v[j]=1;
                }
            }
        }
        for(int i=0;i<5;i++)
        {
            cout<<v[i];
        }
        int p=count(v.begin(),v.end(),1);
        if(p==5)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
