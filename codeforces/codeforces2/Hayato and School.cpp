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
        int a[n];
        vector<int>v1;
        vector<int>v2;


        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
               v1.push_back(i+1);
            }
            else
                v2.push_back(i+1);
        }
        if(v2.size()>2)
        {
            cout<<"YES"<<"\n"<<v2[0]<<" "<<v2[1]<<" "<<v2[2]<<endl;
        }
        else if(v1.size()>=2 && v2.size()>0 )
        {
            cout<<"YES"<<"\n"<<v1[0]<<" "<<v1[1]<<" "<<v2[0]<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
