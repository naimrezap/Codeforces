#include<iostream>
using namespace std;
int main()
{
    string t;
    int i=1;
    while(1)
    {

        cin>>t;
        if(t=="#")
            break;
        else
        {
            if(t=="HELLO")
                cout<<"Case "<<i<<": ENGLISH"<<endl;
            else if(t=="HOLA")
                cout<<"Case "<<i<<": SPANISH"<<endl;
            else if(t=="HALLO")
                cout<<"Case "<<i<<": GERMAN"<<endl;
            else if(t=="BONJOUR")
                cout<<"Case "<<i<<": FRENCH"<<endl;
            else if(t=="CIAO")
                cout<<"Case "<<i<<": ITALIAN"<<endl;
            else if(t=="ZDRAVSTVUJTE")
                cout<<"Case "<<i<<": RUSSIAN"<<endl;
            else
                cout<<"Case "<<i<<": UNKNOWN"<<endl;
            i++;
        }
    }


    return 0;
}
