#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }

          for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(a[i][j]==a[i][j+1])
        }


    }
    return 0;
}
