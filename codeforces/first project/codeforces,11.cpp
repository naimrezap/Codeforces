#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void arr(int *a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}
void ass(int *s,int e)
{
    int l;
    for(l=0;l<e;l++)
        cout<<s[l]<<endl;
}


int main()
{
    //cout<<let<string>("naim","reza")<<endl;
    int a[5]={12,32,4,11,53};
    int n=sizeof(a)/sizeof(a[0]);
    arr(a,n);
    ass(a,n);

    return 0;
}
