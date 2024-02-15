#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
      int n;
      cin>>n;
      int i=1,j=n/2+1;
      while(i<=n/2)
      {
          cout<<i<<" "<<j<<" ";
          i++;j++;

      }
      if(n%2==1) cout<<j<<endl;
      else cout<<endl;

      // cout<<ans<<endl;

    return 0;
}
