#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n-1;i++)
    {
        int small=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[small])
            {
                small=j;
            }
        }
        swap(a[i],a[small]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
