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
        ll mod,rem=0,rem1=0,r=0,q=0;
        while(n>0)
        {

            mod=n%10;//50555
            if(mod==5 || mod==0)
            {
                n=n/10;
                while(n>0)//5055
                {
                    r=n%10;
                    if(((mod==5) && (r==2 || r==7)) || ((mod==0) && (r==5 || r==0)))
                    {
                        q=1;
                         cout<<rem<<endl;
                         break;
                    }
                    else
                    {
                        n=n/10;
                        rem++;
                    }
                }
            }
            else if(q==1)
                break;
            else
            {
                n=n/10;
                rem1++;
                rem=0;
            }


        }
          if(q==0)
        {
            cout<<rem1<<endl;
        }

    }

    return 0;
}
