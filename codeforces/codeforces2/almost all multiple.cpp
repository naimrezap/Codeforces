#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,s=0,div;
        cin>>n>>x;
        if(n%x==0)
        {
            if(n%2==0)
            {
                for(int i=1; i<n; i++)
                {
                    if(i==1)
                        cout<<x<<" ";
                    else if(i==x && n/x!=x)
                    {
                        cout<<n/2<<" ";

                    }
                    else if(i==n/2)
                        cout<<n<<" ";


                    else cout<<i<<" ";
                }
                cout<<1<<endl;
            }
            else{
                 for(int i=1; i<n; i++)
                {
                    if(i==1)
                        cout<<x<<" ";

                    else if(i==x && n/x!=x)
                        cout<<n/x<<" ";
                    else if(i==x )
                        cout<<n<<" ";
                    else cout<<i<<" ";



                        }
                      cout<<1<<endl;
            }

        }
        else
            cout<<-1<<endl;

    }
    return 0;
}
