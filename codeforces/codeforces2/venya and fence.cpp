#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c[a];
    int d=a;
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
    }
     for(int i=0;i<a;i++)
    {
        if(c[i]>b)
        {
            d++;
        }
    }
    cout<<d<<endl;
    return 0;
}
