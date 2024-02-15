#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int i=n-1;
        int j=n-1;
        int cc=0;
        while(i>=0)

        {
            if(v1[j]==v[i])
                {
                    cc++;
                    j--;i--;
                }
                else
                i--;

        }

        cout<<n-cc<<endl;

    }
    return 0;
}
