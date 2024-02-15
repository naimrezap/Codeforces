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
        set<int>v;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            v.insert(a[i]);
        }
        if((v.size()==1))
            cout<<"NO"<<endl;
        else
        {
            sort(a,a+n);
            cout<<"YES"<<endl;
            cout<<a[n-1]<<" ";
            for(int i=0;i<n-1;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
