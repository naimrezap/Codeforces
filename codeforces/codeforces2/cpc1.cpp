#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int s=0;
        if((1440-v[n-1])>=120)
        {
            if((1440-v[n-1])>=240)
                s=2;
            else
                s=1;

        }
        if((v[0]-0)>=120)
        {
            if((v[0]-0)>=240)
                s=2;
            else
                s=s+1;

        }
        for(int i=0;i<n-1;i++)
        {
            if((v[i+1]-v[i])>=120)
            {
                if((v[i+1]-v[i])>=240)
                    s=2;
                else
                    s=s+1;
            }


        }
        if(n==1)
        {
            if((1440-v[0])>=240)
            s=2;

        }
        if(s>=2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
