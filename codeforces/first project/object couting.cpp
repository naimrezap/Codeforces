#include<iostream>
using namespace std;
int c=0;
class A{
public:

     static int c;
    A()
    {
        c++;
    }


};
int A::c=0;
int main()
{
    cout<<A::c<<endl;
    A n,v,k,l;

        cout<<A::c<<endl;
    return 0;
}
