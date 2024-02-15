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
        vector<int>v(n),a(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=1,l=1;
         for(int i=0;i<n;i++)
        {
            if(a[i]>a[i+1]) {f=i+1; break;}
        }

        cout<<f<<" "<<l<<endl;
    }
    return 0;
}
