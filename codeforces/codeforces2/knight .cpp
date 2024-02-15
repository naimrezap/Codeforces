#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<=2 && y<=2)
            cout<<x<<" "<<y<<endl;
        else if(x==3 && y==3)
            cout<<2<<" "<<2<<endl;
        else
            cout<<x-1<<" "<<y-1<<endl;
    }

    return 0;

}
