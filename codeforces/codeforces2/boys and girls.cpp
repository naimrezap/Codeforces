#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int m=1;

   for(int i=0;i<s.length()-1; i++)
   {
      for(int j=i+1;j<s.length();j++)
      {
           if(s[i]>s[j])
       {
           int t=s[i];
           s[i]=s[j];
           s[j]=t;
       }
      }
   }
   for(int i=0;i<s.length()-1;i++)

   {
        if(s[i]==s[i+1])
        continue;
        else
            m++;

   }
   if(m%2==0)
    cout<<"CHAT WITH HER!"<<endl;
   else
    cout<<"IGNORE HIM!"<<endl;

    return 0;
}
