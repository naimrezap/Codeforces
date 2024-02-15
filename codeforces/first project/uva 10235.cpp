#include<iostream>
#include<stdio.h>
using namespace std;
int naim(long int n)
{
    long int i,o=0,r=0;
     if(n==2)
        o=0;
    else
    {
        for(i=2; i<n; i++)
        {

            if(n%i==0)
            {
                o=1;
                break;
            }
            else
                o=0;
        }
    }
    return o;
}
int main()
{
    long int n;
    while(scanf("%ld",&n) !=EOF)
    {
        long int i,r=0,v;
        int t,k,re;
    v=n;
    k=naim(n);


    if(k==0)
    {
        if(v<10)
            cout<<v<<" is prime."<<endl;
        else
        {
            while(n>0)
            {
                t=n%10;
                r=r*10+t;
                n=n/10;
            }
            re=naim(r);
            if(re==0)
                cout<<v<<" is emirp."<<endl;
            else
                cout<<v<<" is prime."<<endl;
        }
    }


    else
        cout<<v<<" is not prime."<<endl;


    }

return 0;
}
