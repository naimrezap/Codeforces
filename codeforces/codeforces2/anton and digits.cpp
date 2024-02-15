#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,s=0, a2,a3,a5,a6;
    cin>>a2>>a3>>a5>>a6;
    a=min(a5,a6);
    if(a>=a2)
       s=s+(a2*256);
    else
    {
        s=s+(a*256);
        s=s+(min(a2-a,a3))*32;

    }
    cout<<s<<endl;
    return 0;
}
