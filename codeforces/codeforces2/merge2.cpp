#include<bits/stdc++.h>
using namespace std;
vector<int>v;
 merge(int a[],int l,int mid,int h)
{
    int n1=mid-l+1;
    int n2=h-mid;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++)
    {
        a1[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        a2[i]=a[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a1[i]>a2[j])
        {
            a[k]=a2[j];
            j++;k++;
        }
        if(a1[i]<=a2[j])
        {
           a[k]=a1[i];
            i++;k++;
        }
    }
    while(i<n1)
    {
        a[k]=a1[i];
        i++;k++;
    }
    while(j<n2)
    {
       a[k]=a2[j];
        j++;k++;
    }
}
void lergesrt(int a[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        lergesrt(a,l,mid);
        lergesrt(a,mid+1,h);
        merge(a,l,mid,h);
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
    lergesrt(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }
    return 0;
}
