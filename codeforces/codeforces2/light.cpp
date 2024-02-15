#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int co=0,m=0,q;
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
                co++;
                else{
                    if(co>0)
                    {
                         q=co/2+1;
                         co=0;
                    }
                    m=max(m,q);

                }
        }
        if(co>0)co=co/2+1;
        m=max(m,co);
        cout<<m<<endl;



    }
    return 0;
}
