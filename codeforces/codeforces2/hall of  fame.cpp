#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k=1,n1=0,n2=0;
        cin>>n;
        string s;
        cin>>s;
        set<char> ss1;
            for(int i=0;i<s.size();i++)
            {
                ss1.insert(s[i]);
            }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                n2=i;
                while(i<s.size())
                {
                    if(s[i]=='L')
                    {
                        k=0;

                        break;
                    }
                    i++;
                }
            }
            if(k==0)
                break;

        }
        if(k==1 && (ss1.size()>1))
        {
            cout<<n2<<endl;
        }
        else if(ss1.size()==1)
            cout<<-1<<endl;
            else
                 cout<<0<<endl;
    }
    return 0;
}
