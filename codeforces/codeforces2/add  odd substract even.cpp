#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long int a,b;
        cin>>a>>b;
        if(a>b)
        {
            if((a-b)%2==0)
            {
                cout<<1<<endl;
            }
            else
                cout<<2<<endl;
        }
        else if(b>a)
        {
            if((b-a)%2==0)
            {
                cout<<2<<endl;
            }
            else
                cout<<1<<endl;
        }
        else
            cout<<0<<endl;
        t--;
    }
    return 0;
}


