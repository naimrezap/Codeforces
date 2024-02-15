#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        if(n>2)
            cout<<"NO"<<endl;
        else if(a[0]==a[1])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

    }
    return 0;
}
