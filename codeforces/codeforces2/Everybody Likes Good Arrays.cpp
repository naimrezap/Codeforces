#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if((a[i]%2==0 && a[i+1]%2==0) || (a[i]%2==1 && a[i+1]%2==1))
                s++;
        }
        cout<<s<<endl;
    }
    return 0;
}
