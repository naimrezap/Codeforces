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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])>1)
                {
                    s=1;
                    break;
                }
            else
                continue;
        }
        if(s==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        t--;
    }
    return 0;
}
