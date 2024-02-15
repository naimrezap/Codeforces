#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k=1,s=0,s1=1;
        cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=abs(a[i]);
        }
        for(int i=n-1;i>=0;i--)
        {
            if((b[i]>b[i-1]) && k==1)
            {
                k=1;
                s++;

            }
            else
            {
                k=0;
                s1++;
                if(b[i]<=b[i-1])

                   {
                        continue;

                   }
               else break;
            }
        }

         if(s!=s1)
             cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;

    }
    return 0;
}
