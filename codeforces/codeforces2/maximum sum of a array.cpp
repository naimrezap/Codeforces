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
        int i=0;
        int j=0;
        int sum=0,m=0;
        while(j<n)
        {
            sum=sum+v[j];//5 5 3 5 2 3
            if((j-i+1)<k) j++;
            else
            {
               m=max(sum,m);
               sum=sum-v[i];
               i++;
               j++;
            }

        }
                    cout<<m<<endl;
    }
    return 0;
}
