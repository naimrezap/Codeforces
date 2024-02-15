#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
       long int n,s;
        cin>>n;
        s=n/2;
        if(n%2==1)
            s++;
                cout<<s<<endl;
        t--;
    }
    return 0;

}
