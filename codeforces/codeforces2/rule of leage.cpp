#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,p;
        int i=2;
        cin>>n>>x>>y;
        p=n;
        int w=max(x,y);
        if((x>0 && y>0) || (x==0 && y==0))
        cout<<-1<<endl;
      else if(n%2==0 && w%2==0)
        cout<<-1<<endl;
      else
      {

           int player=1;;
           int c=1;
           while(player>0)
           {
               int q=w;
               while(q>0)
               {
                   player--;
                   cout<<c<<" ";
                   q--;
               }
                player--;
               c=c+w;
           }

      }


}
return 0;
}
