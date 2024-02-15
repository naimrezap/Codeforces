#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    scanf("\n");
    while(t>0)
    {
        int n,i,c=0;
        scanf("%d",&n);
        int p[n];
        if(n==1)
            c==1;

        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
        for(i=0;i<n;i++)
        {
            if(p[i]>=80)
                c++;
        }
        double r=100/(double)n*(double)c;

        printf("%.3lf%c\n",r,37);



        t--;
    }
    return 0;
}
