
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        int r=0;
        int n=s.length();
        if(n%2==0)
        {
            for(int i=0,j=n/2; i<n/2,j<n; i++,j++)
            {
                if(s[i]!=s[j])
                {
                    r=-1;
                    break;
                }
            }
            if(r==-1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        t--;
    }


    return 0;
}

