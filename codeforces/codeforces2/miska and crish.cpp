#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m1=0,c1=0;
    cin>>t;
    int m[t],c[t];
    for(int i=0;i<t;i++)
    {
        cin>>m[i]>>c[i];

    }
    for(int i=0;i<t;i++)
    {
       if(m[i]>c[i])
        m1++;
       else if(c[i]>m[i])
        c1++;
    }
    if(c1>m1)
        cout<<"Chris"<<endl;
    else if(m1>c1)
         cout<<"Mishka"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
