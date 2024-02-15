#include<iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    while(n>0)
    {
        string str;
        cin>>str;
        int a=str.size();
        if(a>10)
            cout<<str[0]<<a-2<<str[a-1]<<endl;
        else
            cout<<str<<endl;
        n--;
    }
    return 0;
}
