#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        bool r=false;
        cin>>n;
        string s;
        cin>>s;
        set<char>s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='w')
            {
                s1.insert(s[i]);
            }
            else{
                if(s1.size()<=1)
                {
                    if(s[i]=='w')

                    r=true;
                    break;
                }
                s1.clear();
            }

        }
    }
    return 0;
}
