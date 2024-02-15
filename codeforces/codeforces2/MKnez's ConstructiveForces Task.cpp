#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
     int n1;
     cin>>n1;
     if(n1==3)
        cout<<"NO"<<endl;
    else if(n1%2==0)
     {
         cout<<"YES"<<endl;
         for(int i=1;i<=n1;i++)
         {
             if(i==n1)
                cout<<1<<endl;
            else if(i%2==0)
                cout<<1<<" ";
             else
                cout<<-1<<" ";
         }
     }
     else
     {
         cout<<"YES"<<endl;
         int a1=n1/2;
         int b1=-(n1/2-1);
         for(int i=1;i<=n1;i++)
         {
             if(i==n1)
             {
                 cout<<b1<<endl;
             }
            else if(i%2==0)
                cout<<a1<<" ";
             else cout<<b1<<" ";
         }
     }
    }
    return 0;
}
