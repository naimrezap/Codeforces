#include<bits/stdc++.h>
using namespace std;
#define p 32768
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,num=0,q1=0;
        cin>>n;
        int q=32768;
        if(n==0)
            cout<<0<<" ";
        else{
            int x=0,num=0,ma=1e18;
            for(int i=0;i<15;i++)
            {
                x=n+i;
                while(x%2==0)
                {
                    x=x/2;
                    num++;
                }
                int q=15-num+i;
                ma=min(ma,q);
                num=0;
            }
            cout<<ma<<" ";
        }


    }
    return 0;

}
