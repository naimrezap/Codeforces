#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,p=0,m=0;
        cin>>n;
        int a[n],j;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
                m++;
            else if(a[j]<a[j+1])
                p++;
        }
            cout<<"Case "<<i<<": "<<p<<" "<<m<<endl;
    }


    return 0;
}
