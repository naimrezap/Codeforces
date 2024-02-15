#include<bits/stdc++.h>
using namespace std;
int part(int a[],int lb, int up)
{
    int p=a[lb];
    int st=lb;
     int en1=up;
    while(st<en1)
    {
        while(a[st]<=p)
            st++;
        while(a[en1]>p)
        {
            en1--;
        }
        if(st<en1) swap(a[st],a[en1]);
    }
    swap(a[lb],a[en1]);
    return en1;
}
void quicksort(int a[],int lb,int up)
{
    if(lb<up)
    {
        int loc=part(a,lb,up);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,up);


    }
}
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
