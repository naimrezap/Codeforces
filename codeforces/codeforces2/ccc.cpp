#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int bb=abs(a);
        int aa=abs(b);
        if(aa==bb)
        {
            cout<<aa+bb<<endl;
        }
        else
            cout<<2*max(aa,bb)-1<<endl;
    }
    return 0;
}
