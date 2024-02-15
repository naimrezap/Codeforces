#include<iostream>
using namespace std;
class hello
{

    int n1;
    int n2;
public:
    hello()
    {

    }
    hello(int x,int y)
    {
        n1=x;
        n2=y;
    }
    int get()
    {
        return n1;
    }
    void set_value(hello arry[],int n)
    {
        for(int m=0; m<n; m++)
        {
            for(int p=0; p<n-m-1; p++)
            {
                if(arry[p].get() >arry[p+1].get())
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
        cout<<"  "<<n1<<" "<<n2<<endl;
    }
};
int main()
{
    int t;
    hello arry[3]= {hello(90,78),hello(43,66),hello(99,90)};
    arry[3].set_value(arry,3);
    for(int i=0; i<3; i++)
    {
        arry[i].outputs();
    }

    return 0;
}
