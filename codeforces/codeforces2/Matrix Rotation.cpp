#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[2][2];
        int b[4],k=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
                b[k++]=a[i][j];
                            }
        }
        int s=*max_element(b,b+4);
        int m=*min_element(b,b+4);
        int r,p;
        for(int i=0;i<4;i++)
        {
            if(b[i]==s)
                r=i;
            else if(b[i]==m)
            p=i;
        }
        if((r==0 && p==3) || (r==3 && p==0) || (r==1 && p==2) || (r==2 && p==1))

        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
