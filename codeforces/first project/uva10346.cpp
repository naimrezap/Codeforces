#include<stdio.h>

int main()
{
    int n,k;

    while(scanf("%d%d",&n,&k)!= EOF)
    {

        int s;
        s=n;

        if(n>=k)
        {
            while(1)
            {

                s=s+n/k;
                 n=n/k+n%k;
                if(n>=k)
                    continue;
                else
                {

                break;
                }

            }
             printf("%d\n",s);


        }



    }
    return 0;
}

