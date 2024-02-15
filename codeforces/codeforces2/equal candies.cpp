#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
            cout<<0<<endl;
        else{
            int min=*min_element(a,a+n);
            for(int i=0;i<n;i++)
            {
               if(min==a[i])
                    continue;
               else
                s=s+a[i]-min;
            }
            cout<<s<<endl;
        }



    }
    return 0;
}
