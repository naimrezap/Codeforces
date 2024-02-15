#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p=0,s=0,q=0;
        char a[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
                cin>>a[i][j];

        }
        for(int i=1; i<7; i++)
        {
            for(int j=1; j<7; j++)
            {
                if(a[i][j]=='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#' )
                {
                    p=i+1;
                    q=j+1;
                    s=1;
                 break;
                }
            }
            if(s==1)
            {
               cout<<p<<" "<<q<<endl;
               break;
            }
            else
                continue;

        }

    }

    return 0;
}
