#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    s1="QAQ";
    int n=0;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]==s1[0])
       {
           for(int j=i+1;j<s.size();j++)
           {
               if(s[j]==s1[1])
               {
                   for(int k=j+1;k<s.size();k++)
                   {
                       if(s[k]==s1[2])
                        n++;
                   }
               }
           }
       }
    }

    cout<<n<<endl;

    return 0;
}
