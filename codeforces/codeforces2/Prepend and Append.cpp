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
        int p=n;
        for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
        {
            if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0'))
            {
                p-=2;
            }
            else
                break;
        }
        cout<<p<<endl;
    }
    return 0;
}
