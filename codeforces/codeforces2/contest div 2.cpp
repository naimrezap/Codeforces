#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<k;i++)
        {

            if(a[i]>k)
                s++;
        }
        cout<<s<<endl;

    }
    return 0;
}
