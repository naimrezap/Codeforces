#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b=1;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i]==s[j] && i%2!=j%2)
                   {
                       b=0;break;

                   }

            }
        }
        if(b==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
