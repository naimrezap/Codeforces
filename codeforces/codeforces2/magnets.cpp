#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    char a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }

    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i][1]==a[i+1][0])
            c++;

    }
    cout<<c<<endl;
    return 0;
}
