#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int r,s=0,k=0,n;
        cin>>n;
        k=n;
        for(int i=10;i<=n*10;i=i*10)
        {

            if((n%i)>0)
            {
                s++;
                n=n-(n%i);
            }
        }
        cout<<s<<endl;
        for(int i=10;i<=k*10;i=i*10)
        {

            if((k%i)>0)
            {


                cout<<k%i<<" ";

                k=k-(k%i);
            }
        }
        cout<<endl;t--;
    }
    return 0;
}
