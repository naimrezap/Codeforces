#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        vector<ll>v,v1;
        int rem=0;
        ll n1=0,n2=0;
        if(n%2==0)
        {

            n1=n/2;
            n2=n1;
        }

        else
        {
            while(n>0)
            {
                int m=n%10;

                if(m%2==1)
                    rem++;
                if(m%2==0)
                {
                    v.push_back(m/2);
                    v1.push_back(m/2);

                }
                else if(rem%2==1)
                {

                    v.push_back(m/2+1);
                    v1.push_back(m/2);
                }
                else
                {
                    v.push_back(m/2);
                    v1.push_back(m/2+1);
                }
                n/=10;
            }
        }

        ll w=1;
        for(int i=0; i<v.size(); i++)
        {
            n1=n1+w*v[i];
            w*=10;
        }

        cout<<n1<<" ";
        w=1;
        for(int i=0; i<v1.size(); i++)
        {
            n2=n2+w*v1[i];
            w*=10;
        }
        cout<<n2<<endl;
    }
    return 0;
}
