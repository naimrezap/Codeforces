#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(max(a,b)>max(c,d))
        {
            if(min(a,b)<max(c,d))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(min(c,d)<max(a,b))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
