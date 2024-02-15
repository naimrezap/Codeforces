#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin>>a[i][j];
//4 4
//1 2 2 1
//2 4 2 4
//2 2 3 1
//2 4 2 4
        }
        int s=a[n-1][0];
        int m1=0,k=n-1;

        while(k>=0)
        {

            for(int i=k, j=0; i<n; i++,j++)
            {
                m1=m1+a[i][j];

            }
            if(m1>s)
                s=m1;
            k--;
        }
        cout<<s;


    }
    return  0;
}
