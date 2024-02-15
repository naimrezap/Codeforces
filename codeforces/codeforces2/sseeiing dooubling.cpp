#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int n=s.size();
      char s1[2*n];
      for(int i=0;i<n;i++)
        {
            s1[i]=s[i];
        }
        reverse(s.begin(),s.end());
         for(int j=0,i=n;i<2*n,j<n;j++,i++)
        {
            s1[i]=s[j];
        }
        for(int i=0;i<2*n;i++)
            cout<<s1[i];

    cout<<endl;
    }
    return 0;
}
