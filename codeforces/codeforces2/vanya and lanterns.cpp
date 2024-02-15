#include<bits/stdc++.h>
using namespace std;
int main()
{

        long  int n,l;
        cin>>n>>l;
       long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        double max1=0;
        for(int i=0;i<n-1;i++)
        {
            if(((a[i+1]-a[i]))>max1)
                max1=(a[i+1]-a[i]);
        }
        double x=(double)max1/2;
        double y=a[0];
        double p=max(x,y);
        double q=l-a[n-1];

        cout<<fixed<<setprecision(10)<<max(p,q)<<endl;


    return 0;
}
