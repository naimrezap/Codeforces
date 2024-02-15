#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        if(a[i]==1)
           {
                k=1;
                break;
           }
        else continue;
    }
    if(k==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}


