#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=s.size();
        int ans=0;
        if(a==1 && s[0]=='^')
            ans=1;
        else
        {
            if(s[0]=='_')ans++;
            for(int i=0; i<a-1; i++)
            {
                if(s[i]=='_' && s[i+1]=='_') ans++;
            }
            if(s[a-1]=='_') ans++;

        }


        cout<<ans<<endl;

    }

    return 0;
}
