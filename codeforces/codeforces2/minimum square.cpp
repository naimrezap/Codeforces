
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t>0)
    {
       int a,b,s;
       cin>>a>>b;
       if(a>b)
       {
           if(b*2<a)
            s=a*a;
           else
            s=b*b*4;
       }
       else
       {
         if(a*2<b)
            s=b*b;
           else
            s=a*a*4;
       }
       cout<<s<<endl;
        t--;

    }
    return 0;
}
