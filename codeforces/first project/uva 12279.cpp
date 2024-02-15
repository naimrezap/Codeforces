#include<iostream>
using namespace std;
int main()
{
    int n,i=1;

    while(1)
    {
        int j,p=0,z=0;
        cin>>n;
        if(n==0)
            break;
        else{
           int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];

        }
        for(j=0;j<n;j++)
        {
            if(a[j]==0)
                z++;
            else
                p++;
        }
        cout<<"Case "<<i<<": "<<p-z<<endl;

        i++;
        }

    }
    return 0;
}
