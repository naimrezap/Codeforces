#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r,x;
        cin>>l>>r>>x;
        long long a,b;
        cin>>a>>b;

        if(a==b)
            cout<<0<<endl;
        else if(a<b)
                {
                    if(abs(a-b)>=x)
                        cout<<1<<endl;
                    else if((abs(l-a)>=x || abs(r-b)>=x))
                        cout<<2<<endl;
                    else if(abs(b-l)>=x && abs(a-r)>=x )
                        cout<<3<<endl;
                    else
                        cout<<-1<<endl;

                }
                 else
                {
                    if(abs(a-b)>=x)
                        cout<<1<<endl;
                   else if(abs(b-l)>=x || abs(a-r)>=x )
                        cout<<2<<endl;
                    else if(abs(a-l)>=x && abs(r-b)>=x)
                        cout<<3<<endl;
                    else
                        cout<<-1<<endl;

                }
        {



        }

    }
    return 0;
}
