#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int d,m,y,qy,s=0;
        cin>>d>>m>>y>>qy;
        if(d==29 && m==2)
        {
            for(int i=y+4;i<=qy;i+=4)
            {

                if(i%400!=0 && i%4==0 && i%100==0)
                   {
                      continue;
                   }
                   else
                    s++;
            }
        }
        else
            s=qy-y;
        cout<<"Case "<<j<<": "<<s<<endl;
    }
    return 0;
}
