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
        if(n%2==0)
        {
            for(int i=n/2+1;i<=n;i++)
            {
                if(i==n)
                    cout<<i<<" "<<i-(n/2)<<endl;
                else
                cout<<i<<" "<<i-(n/2)<<" ";
            }
        }
        else
        {
             int j=1;
            for(int i=(n+1)/2;i<n;i++)
            {

                cout<<i<<" "<<j<<" ";
                j++;
            }
            cout<<n<<endl;
        }

    }
    return 0;
}
