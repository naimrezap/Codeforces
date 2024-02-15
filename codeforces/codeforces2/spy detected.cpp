#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,s=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(a[0]!=a[1])
        {
            if(a[0]!=a[2])
                s=1;
            else
                s=2;
        }
        else
        {
            for(int i=2; i<n; i++)
            {
                if(a[0]!=a[i])
                {
                    s=i+1;
                    break;
                }

            }
        }
        cout<<s<<endl;

        t--;
    }
    return 0;
}
