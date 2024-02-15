#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    string a;
    cin>>s;
    while(1)
    {

        s++;
        a=to_string(s);
        if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3])
        {
            cout<<s<<endl;
            break;
        }

    }


    return 0;
}
