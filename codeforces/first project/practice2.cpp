#include<iostream>
using namespace std;
class A
{
    int a=9;
    int b=8;
public:
     A()
    {
        cout<<"begin"<<endl;
    }
};
class B:virtual public A
{
    int s;
    int q;
public:

    B()
    {
        cout<<"first"<<endl;
    }
};
class C:virtual public A
{
    int s;
    int q;
public:

    C()
    {
        cout<<"second"<<endl;
    }
};
class D:public B,public C
{
public:
   D()
   {
       cout<<"f"<<endl;
   }

};
int main()
{

    D aa;

    return 0;
}
