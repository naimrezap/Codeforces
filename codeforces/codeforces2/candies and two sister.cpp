#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long int a,s;
        cin>>a;
        if(a<=2)
            s=0;
        else if(a%2==0)
            s=a/2-1;
        else
            s=(a-1)/2;
        cout<<s<<endl;

        t--;
    }
    return 0;
}
