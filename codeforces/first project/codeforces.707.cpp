#include<iostream>
using namespace std;
int main()
{
    int m,n,k=0;
    cin>>m>>n;
    char a[n];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];
            if(a[j]=='Y' || a[j]=='M' || a[j]=='C' )
                {
                k=1;

            }
        }

    }

    if(k==1)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
    return 0;
}
