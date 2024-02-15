#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int p=0;
        int v[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cin>>v[i][j];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {

                if(v[i][j]!=v[n-i-1][n-j-1])
                {
                    p++;
                }
            }
        }


     int a=p/2;
     if(a>k)cout<<"NO"<<endl;
     else{
        int a1=k-a;
        if(a1%2==1 && n%2==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;     }
     //   cout<<(p>k ? "YES\n" : "NO\n");

    }
    return 0;
}
