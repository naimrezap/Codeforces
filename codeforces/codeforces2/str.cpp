#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       string s,s1="{";
       int n,a=0;
       cin>>n;
       cin>>s;
       string s2=s;
       for(int i=1;i<n;i++)
       {
           if(s1[0]>=s[i])
           {
               s1[0]=s[i];
               a=i;
           }
       }
       if(s1[0]>s[0])
        cout<<s;
       else{
        cout<<s1[0];
        for(int i=0;i<n;i++)
        {
            if(i!=a)
                cout<<s[i];
        }
       }
       cout<<endl;
    }
    return 0;
}
