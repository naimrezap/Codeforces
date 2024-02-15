#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
    cin>>s;
    int sm=1,mx=0;
    for(int i=0;i<s.size();i++)
    {
        while(s[i]==s[i+1])
        {
            sm++;
            i++;
        }
       mx=max(mx,sm);
       sm=1;
    }
    cout<<mx<<endl;
    return 0;
}
