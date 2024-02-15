
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
      int s=1,a=1;
      for(int i=1;i<=n;i++)
      {
          cout<<a<<" ";
          if((k-(s+a))>=(n-i-1))
          {
              a=a+s;
              s++;
          }
          else
            a++;
      }
      cout<<endl;
    }
    return 0;
}
