#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,p=0;
      cin>>n;
      char a[2][n];
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<n;j++)
          {
              cin>>a[i][j];


          }
      }
         for(int j=0;j<n;j++)
          {
              if(a[0][j]=='R')
              {
                  if(a[1][j]=='R')
                    continue;
                else
                    {
                        p=1;
                        break;
                    }
              }
              if(a[1][j]=='R')
              {
                  if(a[0][j]=='R')
                    continue;
                  else
                    {
                        p=1;
                        break;
                    }
              }


          }

      if(p==0)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;


    }
    return 0;
}

