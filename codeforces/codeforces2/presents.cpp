#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    int a[n],b[n],c=0,n1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     while(n1<n)
    {
            b[a[i]-1]=i+1;
            n1++;

        i++;


    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
