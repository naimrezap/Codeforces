#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,o=0,t2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
                o++;
            else
                t2++;

        }
        if(t2%2==0)
        {
            if(o%2==0)
                 cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }
        else if(o>=2 && (o-2)%2==0)
            cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;

        t--;
    }
    return 0;
}
