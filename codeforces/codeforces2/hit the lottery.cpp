#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int d,s=0;
    cin>>d;
    if(d>=100)
    {
        s=s+d/100;
        d=d%100;
    }
    if(d>=20)
    {
        s=s+d/20;
        d=d%20;

    }
    if(d>=10)
    {
        s=s+d/10;
        d=d%10;
    }
    if(d>=5)
    {
        s=s+d/5;
        d=d%5;

    }
    s=s+d;
    cout<<s<<endl;

    return 0;
}
