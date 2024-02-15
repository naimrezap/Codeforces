#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a,x,y,p=0;
        cin>>a>>x>>y;
        int s=y*10;
        while(1)
        {
            if(a<=s)
          {
              p=1;
              break;
          }
          a=(a/2)+10;
          x--;

          if(x==0)
            break;
        }
        if(p==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
