#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int  m,n,a,b,d;
       cin>>m>>n>>a>>b>>d;
      if(((a-d)>1 && (b+d)<n ) || ((a+d)<m && (b-d)>1))
      {
          cout<<m+n-2<<endl;
      }

       else
        cout<<-1<<endl;
    }
    return 0;
}

