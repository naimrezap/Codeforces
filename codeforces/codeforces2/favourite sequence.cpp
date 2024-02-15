#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=0,i;
        cin>>n;
        int a[n],b[n],c[n],y=0,k=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n%2==0)
            i=n/2;
        else i=(n+1)/2;
        {
            for(;i<n;i++)
                c[y++]=a[i];
            reverse(c,c+y);

            for(int j=0;j<n;j++)
            {
                if(j%2==0)
                    a[j]=c[k++];
                if(n%2!=0)
                    a[j-1]=a[(n-1)/2];
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";

        }

        cout<<endl;


    }
    return 0;
}
