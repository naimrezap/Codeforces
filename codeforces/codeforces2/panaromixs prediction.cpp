#include<bits/stdc++.h>
using namespace std;
int prime(int w)
{
    int q=1;
   for(int j=w;;j++)//4
   {
        for(int i=2;i<j;i++)
    {
        if(j%i==0)
            {
                q=-1;;
                break;
            }
            else q=j;

    }
    if(q==j)
        break;
   }
    return q;
}
int main()
{
    int n,m,x;
    cin>>n>>m;
        int a=prime(n+1);
        if(a==m)
         cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    return 0;
}
