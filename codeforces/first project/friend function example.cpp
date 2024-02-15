#include<iostream>
using namespace std;
int main()
{
    int m,n;
    try{
        cin>>m>>n;
        if(n==0)
        {
            throw 6;
        }
    cout<<(double)m/n<<endl;
    }
    catch(int x)
    {
        cout<<"its not easy to divide"<<endl;
    }
    return 0;
}
