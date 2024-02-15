#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)<=c || (a+c)<=b || (b+c)<=a)
            cout<<"Wrong!!"<<endl;
        else

            cout<<"OK"<<endl;
        n--;
    }
    return 0;
}
