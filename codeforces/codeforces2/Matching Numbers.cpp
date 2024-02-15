#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        if(n%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ll q=n/2;
            q=q+n;
           for( int i=2;i<n;i+=2)
           {
               cout<<i<<" "<<q<<endl;
               q--;
           }
           ll p=2*n;
           for(int i=1;i<=n;i+=2)
           {
               cout<<i<<" "<<p<<endl;
               p--;
           }


        }

    }
    return 0;
}
