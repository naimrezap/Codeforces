#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int ax,ya,h,x1,y1,x2,y2;
        cin>>ax>>ya>>h>>x1>>y1>>x2>>y2;
        int x;
        if(x1>ax/2)
        {
            x1=ax-x1;
        }
        int y;
        if(x2>ax/2)
        {
            x2=ax-x2;
        }
        if(y1>ya/2)
        {
            y1=ya-y1;
        }
        if(y2>ya/2)
        {
            y2=ya-y2;
        }
        if(x1>x2)
        {
            if(y1>y2)
            {

            }
        }

        int q=y2+y1;
        int t1=min(min(x,y),min(p,q));
        int s=0;
            s+=h;
            s+=t1;

        cout<<s<<endl;
    }
    return 0;
}
