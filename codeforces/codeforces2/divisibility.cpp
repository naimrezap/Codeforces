#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while (t>0)
    {
        long int a,b,s=0;
        cin>>a>>b;
            if(a%b==0)
                cout<<0<<endl;
            else{
                cout<<b-(a%b)<<endl;
            }




        t--;
    }
    return 0;
}
