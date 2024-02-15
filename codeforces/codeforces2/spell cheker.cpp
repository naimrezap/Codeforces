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
        char s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        sort(s,s+n);
        if(n==5)
        {
            if(s[0]=='T')
            {
                if(s[1]=='i')
                {
                    if(s[2]=='m')
                    {
                        if(s[3]=='r')
                        {
                            if(s[4]=='u')
                                cout<<"YES"<<endl;
                            else
                                cout<<"NO"<<endl;
                        }
                        else
                                cout<<"NO"<<endl;
                    }
                    else
                                cout<<"NO"<<endl;
                }
                else
                                cout<<"NO"<<endl;
            }
            else
                                cout<<"NO"<<endl;
        }
        else
                                cout<<"NO"<<endl;


    }
    return 0;
}
