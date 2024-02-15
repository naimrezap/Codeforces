#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int n,m,i,r;
    long int s;
    while(scanf("%ld%ld",&n,&m) !=EOF)
    {
        if(n>=m){
           s=1;
        for(i=m; i>=1; i--)
        {
            s= s*n;
            n=n-1;
        }
        while(s>0)
        {

            r=s%10;
            if(r!=0)

            {
                cout<<r<<endl;
                break;
            }
            s=s/10;

        }
        }

    }
    return 0;
}
