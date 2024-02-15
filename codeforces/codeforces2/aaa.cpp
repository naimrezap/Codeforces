#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==3)
            cout<<1<<" "<<3<<" "<<2<<endl;
        else if(n==2)
            cout<<2<<" "<<1<<endl;
        else if(n%2==0)
        {
            for(int i=2;i<=n;i+=2)
                cout<<i<<" ";
            for(int i=1;i<=n;i+=2)
            {
                if(i==(n-1))
                     cout<<i<<endl;
                else
                cout<<i<<" ";
            }
        }
         else
        {
            cout<<1<<" "<<n-1<<" ";

            for(int i=n;i>1;i-=2)
                cout<<i<<" ";
            for(int i=n-3;i>=2;i-=2)
            {
                if(i==2)
                     cout<<i<<endl;
                else
                cout<<i<<" ";
            }
        }
    }
    return 0;
}

