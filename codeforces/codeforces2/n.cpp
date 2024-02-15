#include <bits/stdc++.h>
using namespace std;
#define ll long long
void naim()
{
    // your code goes

   int n;
   cin>>n;
   int x=2*n;
   int i=x;
   int j=2;
   while(i>0 && j<=x && i>=j)
   {
       if(i==j)
       {
           cout<<i<<" ";

       }
       else
        cout<<i<<" "<<j<<" ";
       j+=2;
       i-=2;
   }
   cout<<endl;
   int i1=x-3;
   int j1=1;
   while(i1>0 && j1<=(x-3) && i1>=j1)
   {
       if(i1==j1)
       {
           cout<<i1<<" ";
       }
       else
       cout<<j1<<" "<<i1<<" ";
       j1+=2;
       i1-=2;
   }
   cout<<x-1<<endl;

}
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        naim();
    }
}

