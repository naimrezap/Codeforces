#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll n1=a*d;
        ll n2=b*c;
        if(n2==n1)
            cout<<0<<endl;
        else if(n2==0 || n1==0)
            cout<<1<<endl;
        else if(n2%n1==0 || n1%n2==0)
            cout<<1<<endl;
        else
            cout<<2<<endl;

    }
    return 0;
}
