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
        long int a[n];
        long int s=0;
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                s=s+a[i];
            }
            if(a[0]==1)
                cout<<"Bob"<<endl;
           else if((s)%2==0)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;


    }
    return 0;

}
