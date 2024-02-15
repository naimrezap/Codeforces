#include<iostream>
using namespace std;
class parent{

 int a;
 int b;
 public:
     //parent(){
    // cout<<"this is inheritence"<<endl;}
     void setv(int x, int y)
     {
         a=x;
         b=y;
     }
     void s1()
     {


     }
};
class child: public parent{
int c;
int d;
public:
    child()
   {

    cout<<"this is a child class"<<endl;}
    void se(int g, int h)
    {
        c=g;
        d=h;
    }
    void sow()
    {

        cout<<s1()<<endl;
    }
};
int main()
{
    parent summat;
    summat.setv(12,4);

    child naim;
    naim.se(11,33);
    naim.sow();


    return 0;
}
