#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   cin>>a;
   int s=0;
   for(int i=0;i<a.length()-1;i++)
   {
       if(abs(a[i]-a[i+1])>=13)
        s=s+26-abs(a[i]-a[i+1]);
       else
        s=s+abs(a[i]-a[i+1]);

   }
   cout<<s<<endl;
    return 0;

}
