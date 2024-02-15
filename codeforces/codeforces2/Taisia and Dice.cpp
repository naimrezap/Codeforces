#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        cout<<s-r<<" ";
        int rr=s-r;
        n-=1;
        while(n>0)
        {
            if((r-rr)>=(n-1))
           {
                cout<<rr<<" ";
                r-=rr;
                 n--;
           }
            else
            {
                while(n>0)
                {
                    if(n==1)
                        cout<<r<<endl;

                        else
                        {
                            cout<<1<<" ";
                            r--;
                        }
                    n--;
                }
            }

        }
        cout<<endl;
    }
    return 0;
}
