
#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==1)

        return 1;
    else
        return a*fact(a-1);

}
int main()
{
    int a1,s;
    cin>>a1;
    s=fact(a1);
    cout<<s;


    return 0;
}
