#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n,x1=0,x2=0;
        cin>>n;
        int a[n],b[n-1],c[n-2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            cin>>b[i];

        }
        sort(b,b+n-1);
         for(int i=0;i<n-2;i++)
        {
            cin>>c[i];

        }
        sort(c,c+n-2);
         for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
               {

                    x1=a[i];
                    break;
               }
               if(i==(n-1) && x1==0)
                x1=a[i+1];

        }
         for(int i=0;i<n-1;i++)
        {
            if(b[i]!=c[i])
               {

                    x2=b[i];
                    break;
               }
               if(i==(n-2) && x2==0)
                x2=b[i+1];

        }
        cout<<x1<<endl<<x2<<endl;


    return 0;
}
