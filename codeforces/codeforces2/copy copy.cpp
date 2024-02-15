#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=1;
        cin>>n;
       long int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        if(n==1)
            cout<<1<<endl;
        else
        {
            sort(a,a+n);
            for(int i=0; i<n-1; i++)
            {
                if(a[i]!=a[i+1])
                    s++;

            }
            cout<<s<<endl;

        }



    }
    return 0;
}
