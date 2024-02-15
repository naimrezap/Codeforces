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
    set<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.insert(a[i]);
    }
    if(n<=3)
    cout<<n<<endl;
    else if(v.size()>3)
        cout<<n<<endl;
    else cout<<(n/2)+1<<endl;


}
    return 0;
}
