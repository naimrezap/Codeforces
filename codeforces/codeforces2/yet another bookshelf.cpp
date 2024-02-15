#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;while(t--)
    {
        int n,a=0,b=0,c=0,p=0,q=0;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
            {
                cin>>s[i];
                if(s[i]==1)
                {
                    p=1;
                    a++;
                }
                if(p==1 && s[i]==0)
                   {
                        b++;
                        q=1;
                   }
                   if(q==1 && a[i]==1)
                    c++;
            }


    }
    return 0;
}
