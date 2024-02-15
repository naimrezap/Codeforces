#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,c,f;
        cin>>a>>b>>c;
        int d=abs(a-b);
        if(a>d*2 || b>d*2 || c>d*2)
            f=-1;
        else{
            if(d>=c)
            {
                f=c+d;
            }
            else
                f=c-d;
        }
        cout<<f<<endl;

    }
    return 0;
}
