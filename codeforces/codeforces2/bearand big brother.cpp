#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,s=1;
    cin>>a>>b;
    while(1)
    {
        a=a*3;b=b*2;
        if(a>b)
        {
            break;
        }
        else
    {
        s++;
        continue;
    }
    }
    cout<<s<<endl;
    return 0;

}
