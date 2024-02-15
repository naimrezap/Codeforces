#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0;
        bool aa=true;
        cin>>n;
        set<int> st;
        vector<int> s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];


        }
        int p=1;
        for(int j=n-1;j>=0;j--)
        {
            st.insert(s[j]);
            if(st.size()<p)
            {
                aa=false;
                m=n-p+1;
                break;
            }
            p++;
        }
        if(aa==true)
            cout<<0<<endl;
        else
            cout<<m<<endl;
    }
    return 0;
}
