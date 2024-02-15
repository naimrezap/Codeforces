#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,l;
    cin>>l>>t;
    char s[l];
    for(int i=0; i<l;i++)
    cin>>s[i];
    while(t>0)
    {
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                    swap(s[i],s[i+1]);
                    i=i+1;
            }
        }
    t--;
    }
    for(int i=0; i<l;i++)
    cout<<s[i];
    return 0;
}
