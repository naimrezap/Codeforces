#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    int a[n];
    set<int> ss;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ss.insert(a[i]);
    }
    cout<<ss.size()<<endl;


    return 0;
}
