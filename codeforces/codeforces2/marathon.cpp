#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a[4],s=0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        int m=a[0];
        sort(a,a+4);
        for(int i=3;i>=0;i--)
        {
            if(a[i]==m)
                break;
            else s++;
        }
        cout<<s<<endl;

        t--;
    }
    return 0;
}
