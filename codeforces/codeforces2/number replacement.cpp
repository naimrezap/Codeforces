#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,q,r,rr,k=1,sum=0,odd=0,odd1=0,ev=0,ev1=0,total=0;

        cin>>n>>q;
       long long  a[n],b[q][2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                ev=ev+a[i];
                ev1++;
            }
            else
            {
                odd=odd+a[i];
                odd1++;
            }
        }
        while(k<=q)
        {
            cin>>b[k-1][0];

            cin>>b[k-1][1];
            r=b[k-1][1];

            if(b[k-1][0]==0)
            {

                        ev=ev1*r+ev;

                if(r%2==1)
                {


                    odd1=n;
                    ev1=0;

                    odd=odd+ev;
                    ev=0;
                   // cout<<total<<endl;
                }
                // ev=ev1*b[k-1][1]+ev;
            }
            else
            {

                        odd=odd1*r+odd;
                        if(r%2!=0){

                    ev1=n;
                    odd1=0;
                    ev=ev+odd;
                    odd=0;
                        }


            }
            long long a1=ev+odd;
            cout<<a1<<endl;
           // total=0;
            k++;

        }




    }
    return 0;
}

