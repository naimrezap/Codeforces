#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,p,sm=0;
        cin>>n>>p;
        vector<int>v(n),v2(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        int a=0;
        for(int i=n-1; i>=0; i--)
        {
            sm=sm+v[i];
            v2[a]=sm;
            a++;
        }
        while(p--)
        {
            ll q;
            cin>>q;
            if(q>v2[n-1])
                {
                    cout<<-1<<endl;
                   // break;

                }
                else{
                   int index = find(v2.begin(), v2.end(),q) - v2;
                }
                cout<<mid+1<<  endl;

        }
        }
}}
