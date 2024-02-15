#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t,tem;
        cin>>s;
        cin>>t;
        tem=t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());


        int b=0,c=0;
        if(tem==t)
        {
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]=='b')
                {
                    b=i;
                    break;
                }
            }
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]=='c')
                {
                    c=i;
                    break;
                }
            }
            reverse(s.begin()+b-1,s.end()-c-1);

            cout<<s<<endl;
        }
        else
            cout<<s<<endl;


    }
    return 0;

}
