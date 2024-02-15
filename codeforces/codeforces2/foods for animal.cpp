#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if((a+c)>=x and (b+c)>=y)
        {
             x=x-a;y=y-b;
       if((x+y)<=c)
        cout<<"YES"<<endl;

        else cout<< "NO"<<endl;
        }
       else cout<< "NO"<<endl;
    }
    return 0;

}
