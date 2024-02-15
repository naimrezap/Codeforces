#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long int a,b;
        long int s;
        cin>>a>>b;
        s=abs(a-b);
        s=(double)ceil(s/10.0);
        cout<<s<<endl;
        t--;
    }
    return 0;
}
