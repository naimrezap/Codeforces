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
        char a[2*n];
        for(int i=0;i<2*n;i++)
            cin>>a[i];
         for(int i=0;i<(2*n)-1;i++)
         {
             if(a[i]==')' && a[i+1]=='(' )
                s++;
         }
        cout<<n-s<<endl;
    }
    return 0;
}
