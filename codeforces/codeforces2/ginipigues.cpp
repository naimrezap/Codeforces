#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,tt=0,ans=0,one=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==1)
            {
                tt++;
                one++;
            }
            else{
                if(one>0)
                {
                    tt=one/2+1;
                }
            }
            if(tt>ans)
                ans=tt;
        }
        cout<<ans<<endl;

    }
    return 0;
}

