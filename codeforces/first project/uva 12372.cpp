#include<iostream>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t>0)
    {
        int h,w,l;
        cin>>h>>w>>l;
        if(h>20 || w>20 || l>20)
            cout<<"Case "<<i<<": bad"<<endl;
        else
            cout<<"Case "<<i<<": good"<<endl;
            i++;
        t--;
    }

    return 0;
}
