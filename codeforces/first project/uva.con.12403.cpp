#include<iostream>
using namespace std;
int main()
{

    int t;
    long int s=0;
    cin>>t;
    while(t>0)
    {
        string n;
        long int d;
        cin>>n;
        if(n=="donate"){
            cin>>d;
            s=s+d;
        }

        else
            cout<<s<<endl;
        t--;
    }
    return 0;
}
