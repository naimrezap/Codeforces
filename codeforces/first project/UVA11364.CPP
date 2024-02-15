#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,i,ma,mi,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ma=a[0];
    mi=a[0];
    for(i=1;i<n;i++)
    {
        ma=max(ma,a[i]);
        mi=min(mi,a[i]);

    }

   int d=(ma+mi)/2;
    int p=d-a[0];//50
    for(i=1;i<n;i++)
    {
        int k=abs(d-a[i]);//39,24
        if(p>k){
          m=a[i];

        }else m=a[0];
    }
    cout<<2*(m-mi)+2*(ma-m)<<endl;
    t--;
    }


    return 0;
}
