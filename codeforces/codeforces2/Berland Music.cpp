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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s;
        cin>>s;
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                a.push_back(v[i]);

            }
            else b.push_back(v[i]);

        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        vector<int>v1(n);
        for(int i=0;i<a.size();i++)
        {
            v1.push_back(b[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            v1.push_back(a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
