#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    string name;
    cin>>name;


    if(name.length()>10)
    {
        cout<<name[0]<<name.length()-2<<name[name.length()-1]<<endl;


    }
    else
        cout<<name<<endl;

    }

    return 0;
}
