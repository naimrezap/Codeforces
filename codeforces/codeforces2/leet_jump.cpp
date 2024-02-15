
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
        for(int i=0;i<v.size();i++)
        {
            cin>>v[i];
        }
        int s=0,mm=0;
        for(int i=0,j=v.size()-1;j>i;)
        {
            int p=min(v[i],v[j]);
            p=p*(j-i);
            s=max(s,p);
            if(v[i]<v[j])
                i++;
            else
                j--;
        }
        cout<<s<<endl;
    }
    return 0;
}
