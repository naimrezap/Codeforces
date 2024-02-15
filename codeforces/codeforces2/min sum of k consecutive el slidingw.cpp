#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum=sum+v[i];

        }
        int ans=sum;

        for(int i=1;i<n-k+1;i++)
        {
          sum=sum-v[i-1];
          sum=sum+v[i+k-1];
          ans=min(ans,sum);
        }
        cout<<ans<<endl;

    }

    return 0;
}
