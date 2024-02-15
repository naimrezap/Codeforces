#include<iostream>
using namespace std;
class A
{
int a;
int b;
public:
    A()
    {

    }
    A(int s,int r)
    {
        a=s;
        b=r;
    }
    A operator +(A obj)
    {

    A tm;
    tm.a=a+obj.a;
    tm.b=b+obj.b;
    return tm;
    }
    void fun()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A n1(7,4),n2(1,55),n3;
    n3=n1+n2;
    n3.fun();
    return 0;
}
