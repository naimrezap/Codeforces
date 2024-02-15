#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll q;

     vector<pair<int,int>>v;
     vector<int>ans;
    cin>>q;
    int p=0;
    while(q--)
    {


        int a,b;
        cin>>a>>b;
        v[p]=make_pair(a,b);

    }
    int j=1,c=1;
    sort(v.begin(),v.end());
    int x=v[0].first;
        int y=v[0].second;
        ans.push_back(j); j++;
    for(int i=1;i<v.size();i++)
    {

        if(y<=(v[i].first)) {ans.push_back(j); c=max(c,j);j++; }
        else {j--;ans.push_back(j);}
    }
    cout<<c<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;
}
