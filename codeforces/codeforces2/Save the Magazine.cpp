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
        string s;
        cin>>s;
        int a[n];
         int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int c=1e9;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                c=min(c,a[i]);
                sum-=c;
                c=1e9;
            }
            else
            {
                c=min(c,a[i]);

            }
        }
     cout<<sum<<endl;
    }
    return 0;
}
