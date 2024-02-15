#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int>a;
        int f=9;
        while(n)
        {
            if(n>f)
            {
               n=n-f;
               a.push_back(f);
               f--;
            }
            else
                {
                    a.push_back(n);
                    n=0;
                }

        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
            cout<<a[i];
        cout<<endl;
    }

    return 0;
}
