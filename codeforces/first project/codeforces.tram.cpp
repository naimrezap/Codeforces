#include<iostream>
using namespace std;
int main()
{
   long long  n,r;
   cin>>n;
   int c=0;
   if(n==7 || n==4)
    c=1;
   else{
   while(n>0)
   {
       r=n%10;
       if(r==4 || r==7)
        c=0;
       else{

         c=1;
        break;
       }
       n=n/10;
   }
   }
   if(c==0)
   {
       cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
    return 0;
}
