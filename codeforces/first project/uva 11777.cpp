#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        int e1,e2,f,at,ct1,ct2,ct3;
        cin>>e1>>e2>>f>>at>>ct1>>ct2>>ct3;
        int m,p,q;
        m=min(ct1,min(ct2,ct3));
        p=((ct1+ct2+ct3)-m)/2;
        q=e1+e2+f+at+p;
        if(q>=90) cout<<"Case "<<i<<": A"<<endl;
        else if(q>=80) cout<<"Case "<<i<<": B"<<endl;
        else if(q>=70) cout<<"Case "<<i<<": C"<<endl;
        else if(q>=60) cout<<"Case "<<i<<": D"<<endl;

        else cout<<"Case "<<i<<": F"<<endl;
    }
    return 0;
}
