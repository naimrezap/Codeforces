#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long int a,b,c,p;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
                p=b;
            else
                p=c;
        }
        else
            p=a;
    }
    else if(b>c)
    {
        if(a>c)
            p=a;
        else
            p=c;
    }
    else
        p=b;
    cout<<"Case "<<i<<": "<<p<<endl;
    }

    return  0;
}
