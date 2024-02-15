#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod1(int x)
{
    x=x%1000000007;
    if(x==1)
        return 1;
    else
        return x*mod1(x-1);
}
int main()
{
    int t1;
    cin>>t1;
    while(t1--)
    {
       ll n,r=1;
       cin>>n;
       while(n>1)
       {
          r=(r%1000000007)*n;
          n--;
       }

       cout<<(r*r)%1000000007<<endl;
    }
    return 0;
}

