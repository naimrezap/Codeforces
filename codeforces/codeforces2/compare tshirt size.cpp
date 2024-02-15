#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;
    int x,y;
    x=a.length();
    y=b.length();
    if(a[x-1]==b[y-1])
    {
        if(x==y)
            cout<<"="<<endl;
        else if(x>y)
            {
                if(a[x-1]=='S')
                    cout<<"<"<<endl;
                else
                    cout<<">"<<endl;
            }
        else

        {
            if(a[x-1]=='S')
                cout<<">"<<endl;
            else
                cout<<"<"<<endl;
        }
    }
    else if(x==y)
        {
            if(a[x-1]==b[y-1])
                cout<<"="<<endl;
            else if((a[x-1]=='S' && b[y-1]=='M') || (a[x-1]=='S' && b[y-1]=='L') || (a[x-1]=='M' && b[y-1]=='L'))
                cout<<"<"<<endl;
            else
                cout<<">"<<endl;
        }
    else if((a[x-1]=='S' && b[y-1]=='M') || (a[x-1]=='S' && b[y-1]=='L') || (a[x-1]=='M' && b[y-1]=='L'))
        cout<<"<"<<endl;
    else
        cout<<">"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
