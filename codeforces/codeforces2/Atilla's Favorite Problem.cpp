#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int ss=n-1;
        int r=(int)s[ss];

        cout<<(int)(s[ss]-'a')+1<<endl;;

    }
    return 0;
}
