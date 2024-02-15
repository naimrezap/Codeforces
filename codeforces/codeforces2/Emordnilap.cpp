#include<bits/stdc++.h>
#define llll long long
#define mod 1000000007
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        llll n1;
        cin>>n1;
        llll r1=(n1*(n1-1))%mod;
        while(n1>1)
        {
            r1=r1%mod*n1;
            n1--;
        }
        cout<<r1%mod<<endl;

    }
    return 0;

}
