
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter your pattern  and also substring..."<<endl;
    string s;
    string p;
    cin>>s>>p;
    int t=1,c=0,temp;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==p[0])
        {
            temp=i;
            for(int j=1;j<p.size();j++)
            {
                if(p[j]!=s[i+1])
                {
                     t=0;
                     break;
                }
                else if(j==(p.size()-1))
                {

                    for(int k=temp;k<p.size();k++)
                    {
                        s[k]='*';
                    }
                    c++;
                }
                else

                {

                     i++;
                }
            }
        }

    }
    cout<<c<<endl;
    cout<<s<<endl;
    return 0;
}
