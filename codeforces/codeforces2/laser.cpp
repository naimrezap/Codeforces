#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        if((x-d)>1 || (y-d)>1)

         cout<<n-1+m-1<<endl;
        else
           cout<<"-1"<<endl;

    }
    return 0;
}
