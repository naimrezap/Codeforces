#include<iostream>
using namespace std;
class vehi{
protected:
    int n=90;
public:

    vehi()
    {
        cout<<"price is 3000"<<endl;
    }

};
class car:protected vehi{
   public:
       int s;
       car()
       {
           cout<<"the name of vehi is car"<<endl;
       }
       void set()
       {
          s=n;
       }
};


int main()
{
    car a;
    a.set();
    cout<<a.s<<endl;


}
