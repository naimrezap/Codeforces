#include<iostream>
#define char t[1000]
using namespace std;
int main()
{
    char t;
    cin>>t;
    int n=t.length();
    int c=0;

    if(n>5)
    {
        for(int  i=0;i<n;i++)
        {
            cout<<t[i]<<endl;
            c++;
        }
    }






return 0;
}
