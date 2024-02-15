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
        char a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
                s++;
        }
        cout<<(s*2)+(n-s)<<endl;


    }
    return 0;
}
