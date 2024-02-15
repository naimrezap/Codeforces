#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long int a[3],n,s;
       for(int i=0;i<3;i++)
       {
           cin>>a[i];
       }
       cin>>n;
       sort(a,a+3);
       s=n-((a[2]-a[0])+a[2]-a[1]);
       if(s<0)
        cout<<"NO"<<endl;
       else if(s%3==0)
        cout<<"YES"<<endl;
     else  if(0<s<3 || s%3!=0)
        cout<<"NO"<<endl;

        t--;
    }
    return 0;
}
