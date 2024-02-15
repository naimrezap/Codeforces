#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=1,s=0;
        cin>>n;
        int a[2*n],b[n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        b[0]=a[0];
        for(int i=1;i<2*n;i++)//2 2 3 4 3 4
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]==a[j])
                {
                    s=1;
                    break;
                }
            }
            if(s==0)
            {
                b[k++]=a[i];
            }
            else
                s=0;
        }
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }cout<<endl;

    }
    return 0;
}
