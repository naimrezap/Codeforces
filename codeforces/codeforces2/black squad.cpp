#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4,v=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            v=v+a1;
        else if(s[i]=='2')
            v=v+a2;
         else   if(s[i]=='3')
            v=v+a3;
         else
            v=v+a4;
    }
    cout<<v<<endl;
    return 0;
}
