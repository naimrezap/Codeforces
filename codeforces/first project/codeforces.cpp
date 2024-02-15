#include<iostream>
using namespace std;
int main()
{
    string t;
    cin>>t;
     if(t[0]>=97 && t[0]<=122)
     {


      t[0]=t[0]-32;
    }
    cout<<t<<endl;
    return 0;
}
