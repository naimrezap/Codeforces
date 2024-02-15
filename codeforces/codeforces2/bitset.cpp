#include<bits/stdc++.h>
#define ll long long
using namespace std;
 int main()
 {

     int t;
     cin>>t;
     while(t--)
     {
         string s1,s2;
         cin>>s1;
         cin>>s2;
         int a=4,i=0,j=0;
         while(a--)
         {
             ll ss1=0; string ss2=0;
             for(;i<s1.size();i++)
             {
                 if(s1[i]!='.') ss1=ss1*10+(s1[i]-'0');
                 else
                 {i++;break;}
             }
             for(;j<s2.size();j++)
             {
                 if(s2[j]!='.') ss2+=s2;
                 else {j++;break;}
             }
             cout<<ss1<<" "<<ss2<<endl;
             bitset<32>b(ss1);
             bitset<32>c(ss2);
             cout<<b<<" "<<c<<endl;
             if(b!=c)
             {
                 break;
             }
             else {
                ss1=0;ss2.erase();
             }


         }
         if(a>0) cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
     }
     return 0;
 }
