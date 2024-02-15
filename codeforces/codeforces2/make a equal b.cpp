#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a10=0,b10=0,s,mod=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                a10++;
            }
        }
     for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==1)
            {
                b10++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
                mod+=1;
        }
        if(n==1)
        {
            cout<<abs(a10-b10)<<endl;
        }
        else{
             if(mod!=(abs(a10-b10)))
            cout<<abs(a10-b10)+1<<endl;
         if(mod==(abs(a10-b10)))
            cout<<abs(a10-b10)<<endl;
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
