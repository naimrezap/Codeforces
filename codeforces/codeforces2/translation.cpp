#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    cin>>s>>r;
    reverse(s.begin(),s.end());
    if(s==r)
        printf("YES\n");
    else
        cout<<"NO"<<endl;


    return 0;
}
