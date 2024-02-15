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
        vector<int>vec(n),sec(n),thd(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        int a=0;
        int m1=0,m2=0,m3=0;
        for(int i=n-1;i>=0;i--)
        {
            if(vec[i]==0)
            {
                a++;
            }
            else
            {
                m1+=a;
            }
        }

        a=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==0)
            {
                vec[i]==1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(vec[i]==0)
            {
                a++;
            }
            else
            {
                m2+=a;
            }
        }

        a=0;
        for(int i=n-1;i>=0;i--)
        {
            if(vec[i]==1)
               {
                    vec[i]=0;
                    break;
               }

        }
        for(int i=n-1;i>=0;i--)
        {
            if(vec[i]==0)
            {
                a++;
            }
            else
            {
                m3+=a;
            }
        }
         cout<<m1<<endl;
         cout<<m2<<endl;
        cout<<m3<<endl;
        int ans=0;
        ans=max(m1,max(m2,m3));
        cout<<ans<<endl;
    }
    return 0;
}
