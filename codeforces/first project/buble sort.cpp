
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,j,t;
    for(i=0;i<=9;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=9;i++)
    {
        for(j=9;j>=i;j--)
        {
            if(a[j-1]>a[j])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
