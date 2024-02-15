#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;

        cin>>s;
         int k=s.length(),q=0;
        int n=0;
        while(k>q)
        {
           if(s[k-1]==s[q])
            {
                q++;
                k--;
             //   cout<<s[i]<<" "<<s[j];
                continue;
            }
            else
            {n=1;
            break;

            }

        }





        if(n==0)
            cout<<"Draw"<<endl;
        else
                cout<<"Alice"<<endl;


    }
    return 0;
}
