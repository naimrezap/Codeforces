#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int x,d=0;
        cin>>x;
        int s=x%10;
        int r=x/s;


            if(r==1)
               d=1;
           else if(r==11)
                d=3;
            else if(r==111)
                d=6;
            else d=10;

        if(s==1)
            cout<<d<<endl;
        else
            cout<<(s-1)*10+d<<endl;
        t--;

    }
    return 0;
}
