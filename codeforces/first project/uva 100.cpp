#include<iostream>
#include<stdio.h>
using namespace std;
int naim(long long t, long long j)
{
  long long k=0;
  while(1)
  {
      k++;
      if(t==1)
        break;
      else if(t%2!=0)
        t=(t*3)+1;
      else
        t=t/2;
  }
  return k;
}


int main()
{
    long long i,j,a,b,tem;

    while(scanf("%lld %lld",&i,&j) !=EOF){
             cout<<i<<" "<<j<<" ";
            if(i>j)
            {
                tem=i;
                i=j;
                j=tem;
            }

            a=0;
    while(i<=j)
    {

         b=naim(i,j);

        if(b>a)
            a=b;
        i++;
    }
    cout<<a<<endl;
    }
    return 0;
}
