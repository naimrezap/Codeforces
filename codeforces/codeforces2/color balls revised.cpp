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
            cin>>a[i];
        int m=*max_element(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==m)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
        return 0;
}
