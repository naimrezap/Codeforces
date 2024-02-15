#include<iostream>
using namespace std;
int main()
{
    long int x;
    int p=0;
    cin>>x;

    if(x<=5)
        p=1;
    else
    {
        p=x/5;
        if((x%5)>0)
        p=p+1;

    }
    cout<<p<<endl;

    return 0;
}
