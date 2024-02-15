#include<bits/stdc++.h>
using namespace std;
int part(int a[],int ll,int uu);
void qsort(int a[],int ll,int uu)
{
    if(ll<uu)
    {
      int  x=part(a,ll,uu);
        qsort(a,ll,x-1);
        qsort(a,x+1,uu);
    }
}
int part(int a[],int ll,int uu)
{
    int pivot=a[ll];
    int st=ll;
    int en=uu;
    while(st<en)
    {
        while(a[st]<=pivot)
        {
            st++;
        }
        while(a[en]>pivot)
        {
            en--;
        }
        if(st<en)
        {
            swap(a[st],a[en]);
        }
    }
    swap(a[ll],a[en]);
    return en;

}
int main()
{
    int a[5]={3,5,7,8,44};
    int ll=0;
    int uu=4;
    qsort(a,ll,uu);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;

}
