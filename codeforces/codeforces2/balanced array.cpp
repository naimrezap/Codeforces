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
        if((n/2)%2==0)
        {
            cout<<"YES"<<endl;
             for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
        for(int i=1;i<n;i+=2)
        {
            if(i==n-1)
                cout<<i+n/2<<endl;
            else
                cout<<i<<" ";
        }
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
