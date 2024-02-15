#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,p,q;
    set<int>s;
    cin>>l;
    cin>>p;
    int a[p];
    for(int i=0;i<p;i++)
      {
            cin>>a[i];
            s.insert(a[i]);
      }
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
         {
            cin>>b[i];
            s.insert(b[i]);
      }
   if(s.size()==l)
    cout<<"I become the guy."<<endl;
   else
    cout<<"Oh, my keyboard!"<<endl;
    return 0;

}
