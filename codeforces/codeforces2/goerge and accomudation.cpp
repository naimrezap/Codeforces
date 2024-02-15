#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int a[r][2];
    int c=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<2;j++)
        {
            if((a[i][j+1]-a[i][j])>=2)
                c++;
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}

