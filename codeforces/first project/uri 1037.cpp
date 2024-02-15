#include<iostream>
using namespace std;
int main()
{
    float t;
    cin>>t;
    if(t>=0 || t<=25)
        cout<<"Intervalo [0,25]"<<endl;
    else if(t>25 && t<=50)
        cout<<"Intervalo (25,50]"<<endl;
    else if(t>50 && t<=75)
    cout<<"Intervalo (50,75]"<<endl;
    else if(t>75 && t<=100)
        cout<<"Intervalo (75,100]"<<endl;
    else
        cout<<"Fora de intervalo"<<endl;

    return 0;
}
