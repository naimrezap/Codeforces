#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n],m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        m=1000;
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(m>(a[i+1]-a[i]))
            {
                m=a[i+1]-a[i];
            }

        }
        cout<<m<<endl;
        t--;
    }
    return 0;
}
