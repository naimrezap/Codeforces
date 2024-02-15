#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;

        int n;
        cin>>n;
        cin>>s;
        int q=1;
        for(int i=1;i<n;i++)
        {

            if(s[i]=='1')
            {
                if(q%2==0)
                   {
                        cout<<"+";
                        q++;
                   }
                else
                   {
                        cout<<"-";
                        q++;
                   }
            }
            else
                cout<<"+";

        }
        cout<<endl;
    }
    return 0;
}
