#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<"I hate it"<<endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(n%2==0)
            {
                if(i==n)
                     cout<<"I love it";
                else if(i%2==1)
                    cout<<"I hate that ";
                else
                     cout<<"I love that ";
            }
            else
            {
                if(i==n)
                     cout<<"I hate it";
                else if(i%2==1)
                    cout<<"I hate that ";
                else
                     cout<<"I love that ";

            }

        }
    }

    return 0;
}
