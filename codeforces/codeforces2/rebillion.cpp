#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,ans=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
           {
                cin>>a[i];
                if(a[i]==1)
                    s++;

           }//11010001
           for(int i=n-1;i>(n-s-1);i--)
           {
               if(a[i]==0)
                ans++;
           }
           if(n==1 || s==0)
            cout<<0<<endl;
           else
       cout<<ans<<endl;
    }
    return 0;
}
