
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t>0)
    {
        int n,x;
        cin>>n>>x;
        int s=1;
        if(n>2)
        {
             if((n-2)%x==0)
        s=s+(n-2)/x;
       else
        s=s+1+(n-2)/x;

        cout<<s<<endl;
        }
        else cout<<1<<endl;

        t--;
    }


    return 0;
}


