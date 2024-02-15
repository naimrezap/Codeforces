#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1;i<s.size();)
        {
           if(s[i]==s[i+1])
           {
               i=i+3;
           }
           else
           {
               k=1;break;
           }
        }
        if(k==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
