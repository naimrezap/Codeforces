#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int i,j=1;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='Y')
            {
                if(s[i+1]=='e')
                    j++;
            }
          else  if(s[i]=='e')
            {
                if(s[i+1]=='s')
                    j++;
            }
          else  if(s[i]=='s')
            {
                if( s[i+1]=='Y')
                    j++;
            }
            else{
                j=0;
                break;
            }
        }
        if(j==s.length())
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
