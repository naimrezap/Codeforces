#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
    }
    int tt=st.size();
    int ans1=1,ans2=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
            ans1++;
        if(ans1==tt) {
            ans1=i+2;
            break;
        }

    }
     for(int i=n-1;i>0;i--)
    {
        if(s[i]!=s[i-1])
            ans2++;
        if(ans2==tt) {
            ans2=n-(i-1);
            break;
        }

    }
    if(tt==1) cout<<1<<endl;
    else if(tt==n) cout<<n<<endl;
    else
    cout<<min(ans1,ans2)<<endl;
    return 0;
}
