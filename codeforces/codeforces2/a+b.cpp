#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int r=(int)(s[0]-'0');
        int r2=(int)(s[2]-'0');
        cout<<r+r2<<endl;
    }
    return 0;
}
