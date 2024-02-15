#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans,c=0;
        vector<int>v;
        cin>>n;
       if(n%2==0)
       {
           cout<<-1<<endl;
ans=0;
       }
       else ans=1;
       if(ans==1)
       {
         while(n>1)
         {

           if(((n+1)/2)%2==0)
           {
               v.push_back(1);
                n+=1;
           }
           else
           {
               v.push_back(2);
               n=n-1;
           }
            n/=2;
         }
         if(n==1)
         {
             cout<<v.size()<<endl;
             for(int i=0;i<v.size();i++)
             {
                 cout<<v[i]<<" ";
             }
             cout<<endl;
         }
         else cout<<-1<<endl;

       }
    }
    return 0;
}
