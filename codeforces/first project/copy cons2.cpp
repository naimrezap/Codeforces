#include<iostream>
using namespace std;
class A
{
public:
    A ()
    {
        cout<<"its copy"<<endl;
    }
    A(A &obj)
    {
        cout<<"its copy"<<endl;
    }
};
int main()
{
    A aa,bb(aa);
    return 0;
}
