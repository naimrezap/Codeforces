#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int k,n,w,s=0;

    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        s=s+k*i;
    }
    if(s>n)
    cout<<s-n<<endl;
    else
        cout<<0<<endl;
    return 0;
}
