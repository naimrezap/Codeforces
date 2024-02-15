#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,m,sum=0,tem,d=0;
        cin>>m>>s;

        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            sum+=a[i];

        }
          d=*max_element(a,a+m);
           int qq=d;
          d=(d*(d+1))/2;

        tem=d-sum;
        tem=s-tem;
       // cout<<tem<<endl;
        if(tem==0)
            cout<<"YES"<<endl;
        else{
            while(tem>0)
            {
                qq=qq+1;
                tem=tem-qq;
            }
            if(tem==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }

    return 0;
}
