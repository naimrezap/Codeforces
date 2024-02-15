#include<iostream>
using namespace std;
 int main()
 {
     string n;
     int i=1;
     while(cin>>n)
     {
         if(n=="*")
            break;
         else{
             if(n=="Hajj")
            cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
         else
            cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
         i++;
         }

     }
     return 0;
 }
