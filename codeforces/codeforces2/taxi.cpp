#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,s1=0,s2=0,s3=0,s4=0;
    cin>>n;
    vector<int>v;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==4)
        {
            s4++;

        }
      else   if(a[i]==3)
        {
            s3++;

        }
         else if(a[i]==2)
        {
            s2++;

        }
         else
        {
            s1++;

        }

    }
   s=s4+s3;
   s1=s1-s3;
   if(s1>0)
   {
       s1=s1+s2*2;
       s=s+s1/4;
       if(s1%4!=0)
        s++;
   }
   else
    s+=s2/2+s2%2;


    cout<<s<<endl;
    return 0;
}
