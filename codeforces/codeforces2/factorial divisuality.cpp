#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

        ll n,m,p=10;
        ll mul=1;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            ll r;
            cin>>r;
            while(r%10==0)
            {
                r=r/10;
                p=p*10;
            }
            mul=mul*(r%p);
        }
        if(mul%m==0 || m%mul==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;


    return 0;
}
