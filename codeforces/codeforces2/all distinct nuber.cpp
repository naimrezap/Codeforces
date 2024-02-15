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
        set<int>aa;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            aa.insert(a[i]);
        }
        if(aa.size()==1)
        {
            if(n%2==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }

      else  if((n-aa.size())%2==0)
            cout<<aa.size()<<endl;

        else
            cout<<aa.size()-1<<endl;
    }
    return 0;
}
