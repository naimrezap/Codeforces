#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,s=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       if(n%2==0)
       {
            for(int i=0;i<n-2;i+=2)
       {
           if((a[i]%2 )!= (a[i+2]%2))
            s=-1;}
        for(int j=1;j<n-1;j+=2){

           if((a[j]%2) != (a[j+2]%2))
            s=-1;
       }
       }
       else
       {
             for(int i=0;i<n-1;i+=2)
       {
           if((a[i]%2 )!= (a[i+2]%2))
            s=-1;}
        for(int j=1;j<n-2;j+=2){

           if((a[j]%2) != (a[j+2]%2))
            s=-1;
       }
       }
       if(s==-1)
        cout<<"NO"<<endl;
       else
        cout<<"YES"<<endl;


    }
    return 0;
}

