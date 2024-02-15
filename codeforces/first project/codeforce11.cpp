#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int i,j,n,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)//1 5 2 4 3
    {
        for(j=0;j<n-1;j++)
        if((i+j+1)==a[j+1])
        {
            int s=a[i];
            a[i]=a[i+1];
            a[i+1]=s;
            x=1;
            break;
        }
        if(x==1)
        break;

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

        t--;
    }

    return 0;
}
