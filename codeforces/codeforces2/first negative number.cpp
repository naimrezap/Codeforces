#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n),v2;
        list<int>l;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];

        }
        int i=0;
        int j=0;

        while(j<n)
        {
          if(v[j]<0)
            l.push_back(v[j]);
            if((j-i+1)<k) j++;
            else
            {
                if(l.size()==0)
                v2.push_back(0);
          else v2.push_back(l.front());
                if(v[i]<0)
                l.pop_front();

               i++;
               j++;
            }

        }
        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }

    }
    return 0;
}
