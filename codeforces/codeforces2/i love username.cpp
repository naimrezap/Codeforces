#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=1;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
   if(t==1)
    s=0;
   else if(t==2)
    {
        if(a[0]==a[1])
            s=0;
    }
   else
   {
       if(a[0]==a[1])
            s=0;
        for(int i=2;i<t;i++)

    {
        if(*max_element(a,a+i)<a[i])
            s++;
        else if(*min_element(a,a+i)>a[i])
            s++;
        else
            continue;
    }
   }
    cout<<s<<endl;
    return 0;
}
