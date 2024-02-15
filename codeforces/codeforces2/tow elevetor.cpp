#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
      long  int a,b,c;
        cin>>a>>b>>c;
      long  int a1=a-1;
      long  int b1;
        if(b>c)
        {
            b1=b-1;

        }
        else if(b<c)
        {
            b1=c-b+c-1;
        }
        if(a1==b1)
            cout<<3<<endl;
        else if(a1>b1)
             cout<<2<<endl;
         else
             cout<<1<<endl;


    }
    return 0;
}
