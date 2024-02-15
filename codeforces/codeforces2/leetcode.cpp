#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        p=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(p==a[i])
            {
                ss++;
            }
            else{
                    int x=a[i];
                while(x<p)
                {
                    x=x+a[i+1];
                    i++;
                }
                if(x==p)
                    ss++;
            }
        }

    }
    return 0;
}
