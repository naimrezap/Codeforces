#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int h,n,m;
        cin>>h>>m;
        n=60*(24-h)-m;
        cout<<n<<endl;

        t--;
    }
    return 0;
}

