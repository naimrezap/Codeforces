
#include<iostream>
using namespace std;
int main()
{
    int a,j=1,i=0,temp,mul=1;
    cin>>a;

    cout<<i<<"+"<<j;

 while(a>0){

    temp=i+j;

    i=j;
    j=temp;
    mul=mul+j;
    cout<<"+"<<j;
    a--;


    }

    cout<<"="<<mul;


    return 0;
}
