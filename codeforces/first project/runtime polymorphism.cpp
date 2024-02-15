#include<iostream>
using namespace std;
class A
{
public:
    void aa()
    {
        cout<<"this is base class";
    }
};
class B:public A
{
public:
    void aa()
    {
        cout<<"this is derived class";
    }
};
int main()
{
    B c;
    c.A::aa();

    return 0;
}
