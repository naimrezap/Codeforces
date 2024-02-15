#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0,q=0;
        cin>>n;
        char a[n],ans[n];
        string b,c;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]=='-' || a[i]=='+')
                b[p++]=a[i];
            else
                c[q++]=a[i];

        }
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        int x=0,y=0,e=0;
        x=b.length();
        y=c.length();
        for(int i=0;i<n;i++)
        {
            if(x>=0)
            {
               ans[i]=c[e++];
               ans[i+1]=b[x--];
               i+=1;
            }
            else
                ans[i]=c[e++];
        }
        for(int i=n-1;i>=0;i--)
        {

            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}
