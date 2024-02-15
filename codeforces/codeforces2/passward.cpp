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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n==8)
            cout<<1*6<<endl;
        else if (n==7)
                cout<<3*6<<endl;
         else if(n==6)
                cout<<6*6<<endl;
         else if(n==5)
                cout<<6*10<<endl;
         else if(n==4)
                cout<<6*15<<endl;
         else if(n==3)
                cout<<21*6<<endl;
         else if (n==2)
                cout<<6*28<<endl;
        else if(n==1)
            cout<<6*36<<endl;
            else
                cout<<0<<endl;
    }
    return 0;
}
