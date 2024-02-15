#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string a;
    cin>>a;
    int l=a.length();
    if(l<=2)
      cout<<a<<endl;
    else {
            cout<<a[0]<<a[1];
        for(int i=3;i<l;i=i+2)
        {

            cout<<a[i];
        }
    }
    cout<<endl;
        t--;
    }
    return 0;
}
