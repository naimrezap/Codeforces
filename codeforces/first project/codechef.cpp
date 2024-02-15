#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cout<<"\n";
    while(T>0)
    {

        long X,Y,Z;
        cin>>X;
        cout<<" ";
        cin>>Y;
        cout<<" ";
        cin>>Z;
        cout<<"\n";
        if((X+Y)>Z)
            cout<<"train\n";
        else if((X+Y)<Z)
            cout<<"planebus\n";
        else
            cout<<"equal\n";
        T--;

    }
    return 0;
}
