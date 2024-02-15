#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b)
        {
            if(b>c)
                cout<<b<<endl;
            else
            {
                if(a>=c)
                    cout<<c<<endl;
                else
                    cout<<a<<endl;

            }
        }
        else{
            if(b>c)
            {
                if(a>=c)
                    cout<<a<<endl;
                else
                    cout<<c<<endl;
            }
            else cout<<b<<endl;
        }
    }

    return 0;
}
