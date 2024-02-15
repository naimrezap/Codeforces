

#include<iostream>


using namespace std;
class A
{
public:
    int a,b;
    void getvalue(int n,int m)
    {
        a=n;
        b=m;
    }
    friend void sum(A k);

};
void sum(A k)
{
    cout<<k.a+k.b<<endl;
}
int main()
{
    A r;
    r.getvalue(4,5);
    sum(r);
    return 0;
}


