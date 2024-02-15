#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int max1=*max_element(a,a+n);
   for(int i=0;i<n;i++){
    if(a[i]==max1)
    continue;
   else
    {
        c=c+(max1-a[i]);
    }

    }
    cout<<c<<endl;
    return 0;
}
