#include<bits/stdc++.h>

using namespace std;
signed main()

{

    int t;
    cin>>t;
    while(t--)
    {
       long long n,m;
        cin>>n>>m;
       long long a[n],b[m],s=0;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<m;i++)
        {
            cin>>b[i];
        }
        for(long long i=0;i<m;i++)
        {
            for(long long j=0;j<n;j++)
            {
                if(b[i]>=a[j])
                    s=s+a[j];
                    else if(b[i]<a[j])
                        break;
            }
            if(i==m-1)
                cout<<s<<endl;
            else
            {
                cout<<s<<" ";
                s=0;
            }

        }
    }
    return 0;
}
