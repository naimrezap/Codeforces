#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a,b,n,k=0;
        cin>>n>>a>>b;
        int r=a+b;
        if(n==a && a==b && b==n)
        cout<<"YES"<<endl;
        else if(n-2>=r)
        {

               cout<<"YES"<<endl;

        }
        else  cout<<"NO"<<endl;




    }
    return 0;
}
