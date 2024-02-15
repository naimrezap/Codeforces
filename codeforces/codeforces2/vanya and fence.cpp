
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,t=0;
    cin>>n>>h;
    int s[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];

    }
    for(int i=0;i<n;i++)
    {
        if(s[i]<=h)
            t=t+1;
        else
            t=t+2;
    }
    cout<<t<<endl;
    return 0;
}
