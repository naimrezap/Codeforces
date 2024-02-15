#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,p=0,q=0,n1=0;
        scanf("%lld",&n);
        vector<ll>v(n);
        priority_queue<int>pq;

        for(ll i=0; i<n; i++)
        {
           scanf("%lld",&v[i]);

        }
        for(ll i=0; i<n; i++)
        {
               if(v[i]!=0)
                  {
                      pq.push(v[i]);
                  }
                else
                {
                    if(pq.size()>0)
                    {
                          p=p+pq.top();
                    pq.pop();
                    }


                }




        }
        printf("%lld\n",p);



    }

    return 0;
}
