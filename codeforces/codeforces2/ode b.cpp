#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a,b,c,a1,b1,c1,d1;
    while(scanf("%lld %lld %lld",&a,&b,&c) != EOF)
    {
        a1=a+b*c;
        b1=a*(b+c);
        c1=a*b+c;
        d1=(a+b)*c;

        int a;
        a=max(max(a1,b1),max(c1,d1));
        cout<<a1<<endl;
    }

    return 0;
}




