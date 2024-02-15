#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];


    for(int i=0;i<n;i++)
    {
        cin>>a[i];  }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
             if(i==to_string(65+1+i))
                cout<<1<<endl;
        }
    return 0;
}
