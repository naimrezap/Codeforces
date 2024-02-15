#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,f=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        s=accumulate(a,a+n,0);

        if(s%n!=0)
            f=-1;
        else
        {
            for(int i=0;i<n;i++)
            {
                if((s/n)<a[i])
                    f++;
            }
        }
        cout<<f<<endl;
    }
    return 0;
}
