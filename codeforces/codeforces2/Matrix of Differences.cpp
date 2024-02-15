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
        int a[n][n];
        int r=n*n;
        int p=1;
        for(int i=0;i<n;i++ )
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                {
                    if(j%2==0){
                    a[i][j]=p;p++;}
                    else
                    {
                        a[i][j]=r;r--;
                    }
                }
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                {
                    if(j%2==1)
                    {
                        a[i][j]=p;p++;
                    }
                    else
                    {
                        a[i][j]=r;r--;
                    }
                }

            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
