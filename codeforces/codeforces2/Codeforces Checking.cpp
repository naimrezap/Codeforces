#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="codeforces";
        char c;
        int r=0;
        cin>>c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
               {
                   r=1;
                    cout<<"YES"<<endl;
                    break;
               }

        }
        if(r==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
