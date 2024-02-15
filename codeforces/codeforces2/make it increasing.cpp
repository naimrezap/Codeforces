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
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll counter=0;
        ll temp;
        temp=a[n-1];
        for(ll i=n-2;i>=0;i--)//8 26 5 21 10
        {
            while(temp<=a[i] and a[i]>0)
            {
                  counter++;
                    a[i]/=2;
            }
            temp=a[i];

          if(a[i]==a[i+1])
            {
                counter=-1;
                break;
            }

        }
        cout<<counter<<endl;


    }
    return 0;
}
