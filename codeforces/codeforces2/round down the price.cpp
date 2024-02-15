#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll m,r;
        cin>>m;
        for(ll i=1;i<10000000000;i*=10)
        {
            if(m==1 || m==i)
                {
                    r=0;
                    break;
                }
            else
            {
                if(m<i)
                {
                    r=m-i/10;
                    break;
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
