#include<iostream>
#include<stdio.h>
using namespace std;
int p(int p1,int p2)
{
    int count1=0,x,p3;

    while(p2>=p1)

    {
        p3=p2*p2+p2+41;
        x=0;

        if(p3<2) x=1;
        else if(p3==2) x=0;
        else
        {
            for(int i=2; i<p3/2; i++)
            {
                if(p3%i==0)
                {
                    x=1;
                    break;
                }
            }

        }
        if(x==0) count1++;
        p2--;
    }
    return count1;
}
int main()
{
    unsigned long int a1,b,t;
    while(scanf("%d%d",&a1,&b) !=EOF)
    {


        t=p(a1,b);
        int r=(t*100)/(b-a1+1);

        printf("%.2lf",(double)r);
    }

    return 0;
}



