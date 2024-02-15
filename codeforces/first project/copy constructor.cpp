#include<iostream>
using namespace std;
class stu{
int n;
double t1;
public:
    stu(int a, double b )
    {
        n=a;
        t1=b;
    }
    stu(stu &n1)
{
    cout<<"its copy construtor\n"<<n1.n<<"\n"<<n1.t1<<endl;

    }
};


/*class te{

int w;
public:

};*/
int main()
{
    stu naim(34,44.44),n1(naim);

    return 0;
}
