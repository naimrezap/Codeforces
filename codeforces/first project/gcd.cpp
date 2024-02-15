#include<stdio.h>
#include<math.h>

int main()

{
    int T;
    scanf("%d",&T);
    while(T>0)
    {
        long a,b,c,r,max1,max2,i;
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a==b==c)
            printf("YES\n");
        else
        {
            if(a==b && c%2==0)
                printf("YES\n");
            else if(a==c && b%2==0)
               printf("YES\n");
            else if(b==c && a%2==0)
               printf("YES\n");
            else
            {
                if(a>b)
                    max2=a;
                else
                    max2=b;
                if(max2>c)
                    max1=max2;
                else
                    max1=c;

                if(a==max1)
                {
                    a=b;
                    b=c;
                }
                else if(max1==b)
                {
                    b=c;
                }


                for(i=max1; i>max1/2; i--)
                {
                    if(i==a && (max1-i)==b)
                    {
                        printf("YES\n");
                        r++;
                        break;
                    }

                }
            }
        }
        if(r==-1)
           printf("NO\n");


        T--;
    }


    return 0;
}
