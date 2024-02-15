#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int shops;
    cin>>shops;
   long int a[shops];
    for(int i=0;i<shops;i++)
    {
        cin>>a[i];
    }
    sort(a,a+shops);
    long int day,q=0;
    cin>>day;
  long int  b[day];
    for(int i=0;i<day;i++)
    {
        cin>>b[i];
       for(int j=0;j<shops;j++)
       {
           if(b[i]>=a[j])
            q++;
       }
       cout<<q<<endl;
       q=0;

    }





    return 0;
}
