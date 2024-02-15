#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0,b;
    cin>>t;
    int a[t][2];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    b=a[0][1];
    c=b;
    for(int i=0;i<t-1;i++)
    {
        for(int j=0;j<2;j++)
        {

               b=b-a[i+1][0]+a[i+1][1];
               if(b>c)
                c=b;
               break;


        }
    }
    cout<<c<<endl;

    return 0;
}



