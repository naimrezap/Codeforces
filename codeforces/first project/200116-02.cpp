#include<iostream>
using namespace std;
class hello
{

    int roll;
    double cgpa;
    string name;
public:
    hello()
    {

    }
    hello(string str,int x,double y)
    {
        roll=x;
        cgpa=y;
        name=str;
    }
    double get()
    {
        return cgpa;
    }
    void set_value(hello arry[],double n)
    {
        for(int m=0; m<n; m++)
        {
            for(int p=0; p<n-m-1; p++)
            {
                if(arry[p].get() < arry[p+1].get())
                {
                    hello t=arry[p];
                    arry[p]=arry[p+1];
                    arry[p+1]=t;
                }
            }
        }
    }

    void outputs()
    {
        cout<<name<<" => "<<roll<<"   => "<<cgpa<<endl;
    }
};
int main()
{
    int t;
    hello arry[10]= {hello("naim ",200116,3.67),hello("nihal",200117,2.45),
    hello("roman",200102,3.90),hello("ahad ",200100,3.43),
    hello("himu ",200101,4.00),hello("suhag",200113,3.56),
    hello("faruk",200118,3.76),hello("akash",200145,1.43),
    hello("sihab",200146,3.00),hello("sifat",200114,3.11)
                    };
    arry[10].set_value(arry,10);
    for(int i=0; i<10; i++)
    {
        arry[i].outputs();
    }

    return 0;
}
