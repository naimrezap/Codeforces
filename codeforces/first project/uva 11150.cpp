#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,s,a;
    while(scanf("%d",&t)==1)
    {
        s=t;
        if(t==2)
            cout<<s+1<<endl;
        else{
            while(t>=3)
        {
           a=t/3;
           s=s+a;
           t=a+(t%3);
           if(t==2)
            s++;
        }
        cout<<s<<endl;

        }

    }
    return 0;
}
