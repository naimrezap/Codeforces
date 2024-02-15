#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,max1=0,x,mm=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int ss=*max_element(a,a+n);
      int aa=*min_element(a,a+n);
      if(a[n-1]==ss || a[0]==aa)
      cout<<ss-aa<<endl;
      else{
            max1=a[n-1]-a[0];
            int ss=*max_element(a+1,a+n);
            max1=max(max1,(ss-a[0]));

            int aa=*min_element(a,a+n-1);
             max1=max(max1,(a[n-1]-aa));

            for(int i=0;i<n-1;i++)
            {
                 x=a[i]-a[i+1];
                mm=max(mm,x);

            }
             max1=max(mm,max1);
            cout<<max1<<endl;
      }

    }
    return 0;
}
