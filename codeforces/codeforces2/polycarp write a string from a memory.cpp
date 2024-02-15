#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        string s;
        cin>>s;
        set<char>ss;
        for(int i=0;i<s.length();i++)
        {
            ss.insert(s[i]);//stringology
            if(ss.size()>3)
            {
                sum++;

                ss.clear();
                ss.insert(s[i]);
            }

        }

                if(ss.size())
                    sum++;

        cout<<sum<<endl;
    }
    return 0;
}
