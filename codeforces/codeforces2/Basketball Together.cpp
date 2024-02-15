
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll n,p;
     cin>>n>>p;
    ll a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a,a+n);
     reverse(a,a+n);

     ll fnt=0;ll rear=n-1;
   ll  cnt=0;
     while(fnt<=rear)//3 4
     {
         if(a[fnt]>p)// 5 4 3
           {
                cnt++;
                fnt++;
           }
            else
            {
                ll r=p/a[fnt];
                rear=rear-r;
                if(fnt<=rear)
                {
                    cnt++;

                }
                 fnt++;
            }
     }
  cout<<cnt<<endl;


    return 0;
}
