
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        ll n;
        cin>>n;
        if(n<10)
            cout<<n<<endl;
        else if(n<=100 && n>9)
            cout<<9+n/10<<endl;
        else if(n>100 && n<=1000)
            cout<<(19+n/100)-1<<endl;
        else if(n>1000 && n<=10000)
            cout<<(28+n/1000)-1<<endl;
        else if(n>10000 && n<100000)
            cout<<(37+n/10000)-1<<endl;
        else
            cout<<(46+n/100000)-1<<endl;
    }
    return 0;
}
