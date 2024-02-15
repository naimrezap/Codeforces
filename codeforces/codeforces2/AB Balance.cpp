
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void naim()
{
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='a' && s[i+1]=='b') a++;
    }
    for(int i=(s.size()-1); i>0; i--)
    {
        if(s[i]=='a' && s[i-1]=='b') b++;
    }
    if(a==b) cout<<s<<endl;
    else if(a>b)
    {
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='a')
            {
                s[i]='b';
                break;
            }
        }
        cout<<s<<endl;
    }
    else{
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]=='a')
            {
                s[i]='b';
                break;
            }
        }
         cout<<s<<endl;
    }
}
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        naim();
    }
}
