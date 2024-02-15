#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,s;
    cin>>m>>n>>s;
    if(m%s==0)
        m=m/s;
    else
        m=m/s+1;
    if(n%s==0)
        n=n/s;
    else
        n=n/s+1;
    cout<<(m*n)<<endl;
    return 0;
}
