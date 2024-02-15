#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,p=0,m=0;
        cin>>n;
        string s;//ffbffbf
        string s2="FBFFBFFBFBFFBFFBFBFFB";


        cin>>s;
        int k;

        for(int j=0;j<s2.size();j++)
        {

            if(s[0]==s2[j])
            {
                 p=0;
                for(int i=j,k=0;k<s.size();i++,k++)
                {
                    if(s[k]==s2[i])
                    {
                        p++;
                         m=max(m,p);
                    }
                    else{



                        break;
                    }
                }



            }
        }
        if(m==n)
        {
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;


       }

    return 0;
}
