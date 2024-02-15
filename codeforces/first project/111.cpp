#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tt=0,rr=1;
        cin>>n;
       long long a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                a[i]=b[i];
            }
            else if(i==1)
            {
                a[i]=b[i-1]-b[i];
                tt=a[i];
                if(tt<0)
                {
                    rr=0;
                    break;
                }
            }
            else
            {
                a[i]=tt+b[i];
                tt=a[i];
            }
        }
        if(rr!=1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }


    }
    return 0;
}
