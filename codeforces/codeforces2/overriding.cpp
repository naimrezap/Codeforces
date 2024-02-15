#include<iostream>
using namespace std;
class shape{
public:
    int d1,d2;
    virtual void area()
    {
        cout<<d1*d2<<endl;
    }
};
class tri:public shape{
   public:
       //double r;
       tri(int a)
       {
           d1=a;
       }
        void area()
       {
           cout<<3.14*d1*d1<<endl;
       }
};
class ri:public shape{
   public:
       //double r;
       ri(int a,int b)
       {
           d1=a;
           d2=b;
       }
        void area()
       {
           cout<<d1*d2<<endl;
       }
};
int main()
{
   shape *s;
   tri t(2);
   ri r(8,7);




   s=&t;
   s->area();
   s=&r;
   s->area();

}
