#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,l,k;
    scanf("%d",&n);
    int a[n];
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    l=abs(int (a[0]-a[1]));
    for( i=1; i<n-1; i++)
    {

    k=abs(int (a[i]-a[i+1]));
        if(l==k || (l-1)==k)
        {
            l=k;

        }
        else
            {
                 x=0;
                break;
            }
    }
    if( l==1)
        printf("Jolly\n");
    else
        printf("Not jolly\n");


    return 0;
}
