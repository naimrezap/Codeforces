#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n],sum=0,m=0;
        for(int i=0;i<n;i++)
        {
            long long s1,s2;
            cin>>s1>>s2;
            if(s1>=s2)
            {
                m=m+s2;
                a[i]=s1;
            }
            else
            {
                m=m+s1;
                a[i]=s2;
            }
        }
       sort(a,a+n);
        m=m*2+a[0]+a[n-1];
        long long s=0;

         for(int i=0;i<n-1;i++)
           {
               s=s+abs(a[i]-a[i+1]);
           }
           cout<<m+s<<endl;
    }
    return 0;
}
