#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int x=0;
    while(a--){
    string s;

    cin>>s;
    if(s=="++X" || s=="X++")
        x++;
    else
        x--;
    }
    cout<<x<<endl;
    return 0;
}
