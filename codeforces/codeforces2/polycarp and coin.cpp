#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,c1,c2;
        cin>>n;
        c1=n/3;
        c2=c1;
        if(n%3==1)
            c1++;
        else if(n%3==2)
            c2++;
        cout<<c1<<" "<<c2<<endl;
        t--;
    }
    return 0;

}
