#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                c++;
        }
        n=n-c;
        if(c>=2)
            {
                if(c%2==0)
                    c=c/2;
                else
                    c=c/2+1;
            }
        cout<<n+c<<endl;
    }
    return 0;
}
