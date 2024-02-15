#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p=0,q=0;
    cin>>n>>m;
    if(n>m)
    {
     cout<<m<<" "<<(n-m)/2<<endl;
    }
    else if(m>n)
    {

        cout<<n<<" "<<(m-n)/2<<endl;
    }
    else
        cout<<n<<" "<<0<<endl;


    return 0;
}
