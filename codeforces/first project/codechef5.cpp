#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if((a*b)>(x*y))
            printf("NO\n");
        else
            printf("YES\n");
        t--;
    }
    return 0;
}
