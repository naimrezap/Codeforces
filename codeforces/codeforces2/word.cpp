#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int u=0,l=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
            u++;
        else
            l++;
    }

    if(u>l)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97)
                {s[i]=s[i]-32;
                }
            else continue;
        }
    }
    else
    {
         for(int i=0;i<s.length();i++)
        {
            if(s[i]<=90)
                s[i]=s[i]+32;
            else continue;
        }
    }
    cout<<s<<endl;

    return 0;
}
