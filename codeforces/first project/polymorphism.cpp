#include<iostream>
using namespace std;
class animal{
public:
    string name;
    animal(){
    }
    animal(string str){
    name=str;
    }
    void showname()
    {
        cout<<"my name is pusy"<<endl;
    }
};
class ncat:public animal{
public:
   ncat(){}
   ncat(string str):animal(name){
   }
// showname()
//{
   // cout<<"my name is mew"<<endl;
//}
};

int main()
{
    ncat obj("pusy");
    obj.showname();

   // dog oj1("lalu");
   // obj1.voice();
    return 0;
}
