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
        vector<int>v(n);
        int one=0,tw=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>0)
                one++;
            else
                tw++;
        }
        int x=one;
        int y=tw;
        for(int i=1;i<=one;i++)
        {
            cout<<i<<" ";
        }
        x--;
        for(int i=1;i<=y;i++)
        {
            cout<<x<<" ";
            x--;
        }
        cout<<endl;
        for(int i=1;i<=(2*y);i++)
        {
            if(i%2==1)
                cout<<1<<" ";
            else cout<<0<<" ";
        }
        int x1=one-tw;
        for(int i=1;i<=x1;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
