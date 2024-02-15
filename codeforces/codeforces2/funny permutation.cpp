#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==3)
        cout<<-1<<endl;
   else if(n%2==0)
    {
        for(int i=n;i>0;i--)
        {
            if(i==1)
                cout<<i<<endl;
            else
                cout<<i<<" ";
        }
    }
    else
    {
        for(int i=n;i>(n/2)+1;i--)
            cout<<i<<" ";
        for(int i=1;i<=n/2+1;i++)
        {
            if(i==n/2+1)
                cout<<i<<endl;
            else
                cout<<i<<" ";
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
