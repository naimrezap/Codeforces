#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int r,c;
        cin>>r>>c;
        int a=r*c;
        if(a%2==0)
            cout<<a/2<<endl;
        else
            cout<<(a+1)/2<<endl;

        t--;
        }
    return 0;
}
