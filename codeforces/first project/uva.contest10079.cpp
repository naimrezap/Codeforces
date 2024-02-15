#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int n,i;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        else
        {
            long long p;
            p=((n+1)*(n+1)-(n+1)+2)/2;
            cout<<p<<endl;
        }



    }
    return 0;

}
