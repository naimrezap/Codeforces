#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1,s2,s3;
        cin>>s;
        int n=s.length();
        s1=s[0];
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='a')
            {
                s2=s[i];
                i++;
                while(i<n)
                {
                    s3+=s[i];
                    i++;
                }
            }
            else
                s1+=s[i];
        }
        if(s2.size()==0)
        {
            cout<<s[0]<<" ";
            for(int i=1;i<n-1;i++)
                cout<<s[i];
            cout<<" "<<s[n-1]<<endl;
        }
        else{
            cout<<s1<<" "<<s2<<" "<<s3<<endl;
        }

    }
    return 0;
}
