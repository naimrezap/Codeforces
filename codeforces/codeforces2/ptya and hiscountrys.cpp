#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>v1(n),v2(n);
    for(int i=0; i<n; i++)
    {

        cin>>v[i];
    }

    int m=1;
    if(n==1)
    {
        m=0;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            int j=i;
            if(j==n-1)
                v1[i]=j;
            while(v[j]>=v[j+1] && j<n-1)
            {
                j++;
            }
            v1[i]=j;
        }
        for(int i=n-1;i>=0;i--)
        {
            int j=i;
            if(j==0)
                v2[i]=0;
            else
            {
                while(v[j]>=v[j-1] && j>0)
                {
                    j--;
                }
                v2[i]=j;

            }
        }
        for(int i=0;i<n;i++)
        {
            int q=abs(v1[i]-v2[i]);
            m=max(m,q);
        }

    }
    cout<<m+1<<endl;
    return 0;

}
