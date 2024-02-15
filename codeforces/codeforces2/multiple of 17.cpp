#include<bits/stdc++.h>
using namespace std;
int main()
{

    while(1)
    {
        long int n;
        cin>>n;
        if(n==0)
            break;
        else if(n<10)
            cout<<0<<endl;
        else{
            int a;
            a=5*(n%10);
            n=n/10;
            if((n-a)%17==0)
                cout<<1<<endl;
            else
                cout<<0<<endl;

        }
    }

}
