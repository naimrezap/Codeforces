#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p=0,q=0,sub=1;
        cin>>n;
        string a;
        cin>>a;
        for(int i=0;i<n;i++)
        {

            if(a[i]=='1')
                p++;
            else
                q++;

        }

        long long max1=1;
        for(int i=0;i<n-1;i++)
        {

            if(a[i]==a[i+1])
                sub++;
            else
                {
                    if(sub>max1)
                    {
                        max1=sub;
                        sub=1;
                    }
                    else
                        sub=1;
                }

        }
        //cout<<max1<<endl;
        if(max1==1)
            max1=sub;
        if(q==0)
        cout<<p*p<<endl;
        else if(p==0)
            cout<<q*q<<endl;
        else
        {
            long long r=max1*max1;
            long long s=p*q;
            cout<<max(r,s)<<endl;
        }

    }

    return 0;
}
