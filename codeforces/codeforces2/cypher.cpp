#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d=0,u=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int a1[n];

        for(int i=0;i<n;i++)
        {
            cin>>a1[i];
            char s[a1[i]];
            for(int j=0;j<a1[i];j++)
                {
                    cin>>s[j];
                    if(s[j]=='D')
                        a[i]++;
                    else a[i]--;

                }

        }

        for(int i=0;i<n;i++)

        {
            if(a[i]>9)
                cout<<a[i]-10<<" ";
            else if(a[i]<0)
                cout<<a[i]+10<<" ";
            else
                cout<<a[i]<<" ";
        }
            cout<<endl;
    }
    return 0;
}
