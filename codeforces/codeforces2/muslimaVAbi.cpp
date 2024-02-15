#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int &x:v)cin>>x;
        int ans=0;
        for(int i=0,j=n-1;i<j;)
        {
            if(v[i]==v[j])
            {
                i++;
                j--;
            }
            else if(v[i]>v[j])
            {
                v[i]-=v[j];
                j--;
                ans++;
            }
            else if(v[j]>v[i])
            {
                v[j]-=v[i];
                i++;
                ans++;
            }
        }

        cout<<ans<<endl;
    }
}
