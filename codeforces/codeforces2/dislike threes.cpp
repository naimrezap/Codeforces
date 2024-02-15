#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,x;
    cin>>n;
    x=n;
    vector<int>v;
    vector<int>r;

    for(int i=0;;i++)
    {
      v.push_back(i);
      if(i%3!=0 && i%10!=3)
      {
          r.push_back(i);
          n--;
      }
      if(n==0)
        break;

    }
    cout<<r[x-1]<<endl;
        t--;
    }

    return 0;
}
