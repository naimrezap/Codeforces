#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void aa()
    {
        cout<<"the numberr 1"<<endl;
    }
};
class B:public A
{
    int b;
public:
    void bb()
    {
         cout<<"the numberr 2"<<endl;
    }
};
class C:public A
{
    int a;
public:
    void bb()
    {
        cout<<"the numberr 3"<<endl;
    }
};
class D:public C,public B
{
    int a;
public:
    void dd()
    {
        cout<<"the numberr 4"<<endl;
    }
};
int main()
{
    D naim;
    naim.C::bb();
    return 0;
}
