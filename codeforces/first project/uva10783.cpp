#include<iostream>
using namespace std;
int main()
{
    int t,j;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        int a,b,s=0,i;
        cin>>a>>b;
        if(a%2==0)
            a=a+1;

        for(i=a; i<=b; i=i+2)
        {
            s=s+i;
        }
        cout<<"Case "<<j<<": "<<s<<endl;
    }

    return 0;
}
