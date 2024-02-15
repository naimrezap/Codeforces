#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=floor((k*l)/nl);
    int b=c*d;
    int c1=min(a,min(b,p/np));
    cout<<c1/n<<endl;
    return 0;
}
