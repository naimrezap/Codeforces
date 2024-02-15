#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sc,n1;
    int tem,tt;
    cin>>t;
    while(t--)
    {
        tem=0;
        cin>>n>>sc;
        vector<int>vec;
        for(int i=0;i<n;++i)
        {
            cin>>n1;
            vec.push_back(n1);
        }
        sort(vec.begin(),vec.end());
        while(vec.size())
        {
            tt=count(vec.begin(),vec.end(),vec.front());
            vec.erase(vec.begin(),vec.begin()+tt);
            if(tt>=sc)
               tem+=sc;
            else
                tem+=tt;
        }
        cout<<tem<<endl;
    }
}
