#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a=0,d=0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        a++;
        else d++;

    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(a<d)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
