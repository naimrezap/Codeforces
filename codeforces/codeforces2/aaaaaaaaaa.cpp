#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v1(n),v2(n),v3(n);
        for(int i=0; i<n; i++)
        {
            cin>>v1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>v2[i];
            v3[i]=v2[i];
        }
        for(int i=0; i<n; i++)
        {
            if(v1[i]>=v2[i])
                v1[i]=v1[i]-v2[i];
            else
            {
                v3[i]=v1[i];
                v1[i]=0;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        int j=1;

        for(int i=0,j=0;j<n, i<n; i++)
        {

            while(r<n)
            {
                if(v1[i]>=v2[r])
                {
                    v1[i]=v1[i]-v2[r];
                    v3[r]=v3[r]+v2[r];
                }
                else
                {

                    v3[r]=v3[r]+v1[i];
                    v1[i]=0;
                }
                r++;

            }


        }



        for(int i=0; i<n; i++)
        {
            cout<<v3[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

