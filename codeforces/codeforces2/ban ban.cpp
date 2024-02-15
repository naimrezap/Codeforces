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
        if(n==1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(n%2==0)
        {
            int j=2;
            int k=(n*3)/2;
            int s1=n/2;
            cout<<s1<<endl;
            for(int i=1;i<=s1;i++)
            {

                cout<<j<<" "<<k+3<<endl;
                j+=3;
                k+=3;
            }

        }
        else{
               int j=2;
            int k=(n*3+1)/2;
            int s2=n/2+1;
            cout<<s2<<endl;
            for(int i=1;i<=s2;i++)
            {

                cout<<j<<" "<<k+1<<endl;
                j+=3;
                k+=3;
            }
        }

    }
    return 0;
}
