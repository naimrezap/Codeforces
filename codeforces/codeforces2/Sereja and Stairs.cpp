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
       set<int>s1,s2;
       set<int>::iterator it;
       it=s1.begin();
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        int p=a[n-1];
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=p)
            {
            s1.insert(a[i]);
            s2.insert(a[i+1]);
            }
            else break;
        }
        int q=1+s1.size()+s2.size();
        cout<<q<<endl;
        for (it=s1.begin();it!=s1.end();++it )
            cout<< *it++<<" ";
        reverse(s2.begin(),s2.end());
        for (set<int>::iterator it=s2.begin(); it!=s2.end(); ++it)
           cout<< *it<<" ";

    }
    return 0;
}
