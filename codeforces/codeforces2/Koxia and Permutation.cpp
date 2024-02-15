#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;
        cin>>n>>k;
        int i=1,j=n;
        if(n==k || k==1)
        {
            for(int i=1; i<=n; i++)
                cout<<i<<" ";
        }
        else
        {
            while(i<j)
            {
                cout<<j<<" "<<i<<" ";
                j--;
                i++;
                if(i==j)
                {
                    cout<<j;
                    break;
                }
            }

        }

        cout<<endl;

    }
    return 0;
}
