#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,m,r,i;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=a[i-1])
                continue;
            else
            s=i;

        }
        m=n-i;
        for(int i=n-1;i>=s;i--)
        {
            for(int j=0;j<s;j++)
            {
                if(a[j]==a[i])
                  {
                        m=n-(i+1);
                        r=1;

                        break;
                  }

            }
            if(r==1)
                break;
        }
        cout<<m<<endl;


    }
    return 0;
}
