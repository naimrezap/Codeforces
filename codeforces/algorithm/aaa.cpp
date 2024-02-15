#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,m;
        cin>>n>>k;
        if(n<k)
        {
            ll tem=n;
            n=k;
            k=tem;
        }
        if(k==1 && n!=1)
        {
            m=n-1;
        }
        else
        {

            m=min(n,k);
            m+=1;


            if(n%k==0)
                m=m+n/k-1;
            else
                m=m+n/k+1;
        }

        cout<<m<<endl;
    }
    return 0;
}
