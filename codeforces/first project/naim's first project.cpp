#include<iostream>
using namespace std;
class world{
    int roll;
    double cgpa;
    string name;
public:
    void get_roll()
    {this roll=roll;}

};
int main()
{
    int temp;
    world ob1[3];
    for(int i=0;i<3;i++)
    {
        cin>>ob1[i].get_roll();
    }


    return 0;
}
