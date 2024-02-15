#include<bits/stdc++.h>
using  namespace std;
void naim()
{
   int n,k;
   int sum=0;
   cin>>n>>k;
   vector<string> v(n+1);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];

   }
   for(int i=1;i<n;i++)
   {
       if(v[i]==v[0]) sum++;
   }

 cout<<sum+1<<endl;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
        naim();
    return 0;
}
