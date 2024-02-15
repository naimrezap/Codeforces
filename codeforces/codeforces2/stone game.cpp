#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,r=0,s=0;
    cin>>n;
    int q=n-1;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int c=*max_element(a,a+n);
   int b=*min_element(a,a+n);
   while(1)
   {

       if(a[p]==c || a[p]==b)
        r++;
     else  if(a[q]==b || a[q]==c)
        r++;

        p++;
       q--;
       s++;
       if(r==2)
        break;
   }
   cout<<s<<endl;
    return 0;
}
