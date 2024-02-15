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
        long long a[n],s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        cout<<abs(s)<<endl;
    }
    return 0;
}
