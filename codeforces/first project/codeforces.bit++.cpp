#include<iostream>
using namespace std;
int main()
{
    int t,x=0;
    cin>>t;
    string a;

    while(t>0)
    {
        cin>>a;
        if(a=="x++")x++;
        else if(a=="++x")++x;
        else if(a=="--x")--x;

        else
            x--;

        t--;
    }
    cout<<x<<endl;

    return 0;
}
