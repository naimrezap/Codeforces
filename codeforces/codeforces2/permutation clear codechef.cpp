#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int a[n];
        cin>>k;
        int b[k];
        int q=0,p=0;

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<k; i++)
            cin>>b[i];
        for(int i=0; i<n; i++)//3456
        {
            for(int j=0; j<k; j++)//56
            {
                if(a[i]==b[j])
                {
                    q=1;
                    break;
                }
            }
            if(q==0)
            {
                cout<<a[i]<<" ";
            }
            else
                q=0;
            if(i==(n-1))
                cout<<endl;
        }

        }
        return 0;
    }
