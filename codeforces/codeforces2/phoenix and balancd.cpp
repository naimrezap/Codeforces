#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int r=n/2;
        cout<<pow(2,r+1)-2<<endl;
        t--;
    }
    return 0;
}
