#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,s=0,t=0;
    cin>>n;
    while(1)
    {
        if(t>n)
            break;
        i++;
        s=s+i;
            t=t+s;

    }
    if(i==1)

    cout<<i<<endl;
    else
        cout<<i-1<<endl;
    return 0;
}
