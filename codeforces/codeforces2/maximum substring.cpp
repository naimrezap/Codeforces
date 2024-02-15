#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        long long n,ans=0,one=0,two=0,max1=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]-'0'==1)
                one++;
            else
                two++;
        }
        max1=one*two;

        for(int i=0;i<n;i++)
        {
            long long sub=1;
            while(i<n-1 && s[i]==s[i+1])
            {
                sub++;i++;

            }
            max1=max(max1,sub*sub);
        }
        cout<<max1<<endl;
    }

return 0;
}
