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
        long long num=0;
        string s1="314159265358979323846264338327";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s1[i])
            {
                num++;
            }
            else break;
        }
        cout<<num<<endl;
    }

 return 0;
}
