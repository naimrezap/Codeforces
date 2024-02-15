#include<iostream>
using namespace std;
int main()
{
   unsigned long long c,d;

    while(1)
    {

   int l=0,s=0;
    cin>>c>>d;
    if(c==0 && d==0)break;
    while(c>0)
    {
        int p=d%10+c%10+s;
        if(p>9){l++;s=1;}
        else s=0;
        d=d/10;c=c/10;
    }
    if(l==0)
    cout<<"No carry operation."<<endl;
    else if(l==1)
        cout<<l<<" carry operation."<<endl;
    else
        cout<<l<<" carry operations."<<endl;}
    return 0;
}
