#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int i=0,j=0,p=0;
        int n=s1.size();
        int m=s2.size();
        if(s1==s2)
            cout<<"YES\n"<<s1<<endl;
        else if(s1[0]==s2[0])
        {
            cout<<"YES"<<endl;
            cout<<s1[0];

            if(max(n,m)>1)cout<<"*"<<endl;

        }
        else if(s1[n-1]==s2[m-1])
        {
            cout<<"YES"<<endl;
            if(max(n,m)>1)cout<<"*";
            cout<<s1[n-1]<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(s1[i]==s2[j] && s1[i+1]==s2[j+1])
                    {
                        cout<<"YES"<<endl;
                        cout<<"*"<<s1[i]<<s1[i+1]<<"*"<<endl;
                        p=1;
                        break;
                    }
                }
                if(p==1)
                    break;
            }
            if(p==0)
                cout<<"NO"<<endl;

        }


    }
    return 0;
}
