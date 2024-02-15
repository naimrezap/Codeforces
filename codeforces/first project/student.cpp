#include<stdio.h>
int rev (int n)
{
    int revrs;

    while(n>0)
    {
        int r=n%10;
        revrs=revrs+r*10;
        n=n/10;
    }
    return revrs;
}
int main()
{
    int n,r1,r2,i;
    int s=0;
    cin>>n;
    while(1)
    {
        r1=rev(n);
    }
    return 0;
}
