#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

       int m,j,r,n;
       string s;
       cin>>n>>s;
       vector<char>v;
       for(int i=n-1;i>=0;i--)
       {
           if(s[i]=='0')
           {
               m=s[i-1]-'0'+(s[i-2]-'0')*10;
               v.push_back((char)(m+96));
               i-=2;
               continue;
           }
           j=s[i]-'0';
           v.push_back((char)(j+96));
       }
       for(int i=v.size()-1;i>=0;i--)
        cout<<v[i];
       cout<<endl;




    }
    return 0;
}

