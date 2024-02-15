#include<bits/stdc++.h>
#define rr int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,two=0,one=0;;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==-1 || a[i+1]==-1)
                one=1;
            if(a[i]==-1 && a[i+1]==-1)
            {
                a[i]=1;
                a[i+1]=1;
                break;
            }

        }
        for(int i=0; i<n; i++)
            two=two+a[i];
        if(one==1)
            cout<<two<<endl;
        else cout<<two-4<<endl;
    }
    return 0;
}
