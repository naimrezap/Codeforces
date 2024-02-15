#include<iostream>
using namespace std;
class hello{
int i;
double j;
string name;
public:
    hello(){
    cout<<"this is my first programing using pointer in object oriented programing"<<endl;}
    hello(int x)
    {
         i=x;
        //j=y;
    }
    void get_output()
    {
        cout<<i<<"\n"<<endl;
    }
};
int main()
{
    hello obj(12),*obj1,obj2(21);
    obj1=&obj;
    obj2.get_output();
    obj1->get_output();



    return 0;

}
