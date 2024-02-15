#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{

   int t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       vector<ll>v;
       if(n%2==0)
       {
           cout<<-1<<endl;
       }
       else
       {
           while(n>1)
           {
               if(n==3)
               {
                  v.push_back(2);
               }
                ll a=(n+1)/2;
                ll b=(n-1)/2;
                if(a%2==1)
                {
                    v.push_back(1);
                    n=a;
                }
                else{
                    n=b;
                    v.push_back(2);
                }

           }
           reverse(v.begin(),v.end());
           cout<<v.size()<<endl;
           for(ll i=v.begin();i<v.end()-1;i++)
           {
               cout<<v[i]<<" ";
           }

       }
   }
    return 0;//QXSPOHATEAWP
}
