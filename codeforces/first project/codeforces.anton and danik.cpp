#include<iostream>
using namespace std;
int main()
{

    string s;
    int a=0,d=0;
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>s[j];
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(a==d)
        cout<<"Friendship"<<endl;
    else
        cout<<"Danik"<<endl;
    return 0;
}
