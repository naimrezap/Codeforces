#include <iostream>
 #include<stdio.h>
using namespace std;

int main() {
    long double a;
    scanf("%lf",&a);

   int p=0,q=0,r=0,s=0,t=0,u=0,v=0;
  cout<<"NOTAS:"<<endl;
   if(a>=100){
   p=a/100;
    a=a%100;
   }
   if(a>=50)
   {
       q=a/50;
       a=a%50;
   }
   if(a>=20)
   {
       r=a/20;
       a=a%20;
   }
   if(a>=10)
   {
       s=a/10;
       a=a%10;

   }
   if(a>=5)
   {
       t=a/5;
       a=a%5;
   }
   if(a>=2)
   {
       u=a/2;
       a=a%2;
   }

   if(a==1){
   v=a;
   a=a%1;
   }
   if(a>=0.50)
   {
       w=(int)a/0.50;
       a=a%0.50;
   }
   cout<<p<<" nota(s) de R$ 100,00"<<endl;
    cout<<q<<" nota(s) de R$ 50,00"<<endl;
     cout<<r<<" nota(s) de R$ 20,00"<<endl;
      cout<<s<<" nota(s) de R$ 10,00"<<endl;
       cout<<t<<" nota(s) de R$ 5,00"<<endl;

        cout<<u<<" nota(s) de R$ 2,00"<<endl;
        cout<<v<<" nota(s) de R$ 1,00"<<endl;
         cout<<w<<" nota(s) de R$ 1,00"<<endl;
    }
    return 0;
}
