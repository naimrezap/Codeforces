#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long a[n],b[m],s=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(b[i]>=a[j])
                    s=s+a[j];
                else if(b[i]<a[j])
                    break;
            }if(i==m-1)
                cout<<s<<endl;else{cout<<s<<" ";                s=0;} }}return 0;}
