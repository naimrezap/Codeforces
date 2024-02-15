#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,k,p=0,s=0;
    cin>>n>>l;
    k=240-l;
    for(int i=1;i<=n;i++)
    {
        p=p+i*5;

        if(p>k)
            break;
        else
            s++;

    }
    cout<<s<<endl;
    return 0;
}
