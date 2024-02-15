#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,co=0,k=0;
        cin>>n;
        int a[n];
        vector<int>v;

        for(int i=0;i<n;i++)
            {
                cin>>a[i];
               v.push_back(a[i]);
            }

        sort(v.begin(),v.end());
         for(int j=v.size()-1;j>=0;j--)
         {
              for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==0)
                continue;
            if(v[i-1]==0)
            {
                k=1;
            }
           else if((v[i]-v[i-1-k])==0)
                continue;
            else if((v[i]-v[i-1])==1)
            {
                v[i]=0;

            }
            else
            {
                v[i]=0;
                co++;
            }
        }
         }

        cout<<co<<endl;


    }

    return 0;
}
