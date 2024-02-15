#include<iostream>
using namespace std;

int main()
{
    int t,d=0,i,j;
    cin>>t;
    int a[t],b[t],c[t];
    for(j=0;j<t;j++)
    {
        cin>>a[j]>>b[j]>>c[j];
    }



     for(i=0; i<t; i++)
    {
        if((a[i]==1 && b[i]==1) || (b[i]==1 && c[i]==1) || (c[i]==1 && a[i]==1))
            d++;
    }
    cout<<d<<endl;

    return 0;
}

