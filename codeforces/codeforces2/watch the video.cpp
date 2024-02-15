#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{


    int a[6],b[6],s=0;
    for(int i=0; i<6; i++)
    {
        cin>>a[i];
        if(i==0)
            b[i]=a[i];
        else if(i==1)
            b[i]=a[i]*5;
        else if(i==2)
            b[i]=a[i]*10;
        else if(i==3)
            b[i]=a[i]*20;
        else if(i==4)
            b[i]=a[i]*50;
        else if(i==5)
            b[i]=a[i]*100;

    }
    int c=*max_element(a,a+6);
   // cout<<c<<endl;
    for(int i=5; i>=0; i--)
    {
        if(c==b[i])
        {
            s=i;
            break;
        }
    }
    if(s==0)
        cout<<1<<endl;
    else if(s==1)
        cout<<5<<endl;
    else if(s==2)
        cout<<10<<endl;
    else if(s==3)
        cout<<20<<endl;
    else if(s==4)
        cout<<50<<endl;
    else if(s==5)
        cout<<100<<endl;

    return 0;
}
