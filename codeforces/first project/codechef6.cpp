#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t>0)
    {
      long x;
      int c=0,n=0;
      cin>>x;
      char a[14];
      for(i=0;i<14;i++)
      {
          cin>>a[i];
      }
      for(i=0;i<14;i++)
      {
          if(a[i]=='N')
            n++;
          else if(a[i]=='C')
            c++;
      }
      if(c>n)
        cout<<60*x<<"\n";
      else if(c==n)
        cout<<55*x<<"\n";
      else
        cout<<40*x<<"\n";
        t--;
    }
    return 0;
}

