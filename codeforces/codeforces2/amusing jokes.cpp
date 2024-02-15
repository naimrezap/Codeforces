#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3;
    int a,b,c,d;
    a=s1.length();
     b=s2.length();
      c=s3.length();
      d=a+b;
      if(d==c)
      {
          s4=s1+s2;
          sort(s4.begin(),s4.end());
          sort(s3.begin(),s3.end());
          if(s3==s4)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
      }
    else
        cout<<"NO"<<endl;
    return 0;
}
