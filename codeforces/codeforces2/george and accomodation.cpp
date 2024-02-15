#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    int s[n][2];
    for(int i=0; i<n; i++)
    {for(int j=0; j<2;j++)
        cin>>s[i][j];
    }
    for(int i=0; i<n; i++)
    {for(int j=0; j<1;j++)
        {
            if(s[i][j+1]-s[i][j]>=2)
                t++;
        }
    }
    cout<<t<<endl;
    return 0;
}
