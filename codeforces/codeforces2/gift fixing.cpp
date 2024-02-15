#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long int n,a1,b1,s=0,c1;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        a1=*min_element(a,a+n);
        b1=*min_element(b,b+n);
        c1=min(a1,b1);
         for(int i=0;i<n;i++)//1 1000 1000,1 1 1 1
        {
            if(a[i]-a1>b[i]-b1)
             s= s+(a[i]-a1)  ;
             else if(b[i]-b1>a[i]-a1)
                s=s+(b[i]-b1);
             else if(a[i]-a1==b[i]-b1)
             {
                 if(a[i]-a1==0)
                    continue;
                 else
                    s=s+a[i]-a1;
             }



        }
        cout<<s<<endl;
        t--;
    }
    return 0;
}
