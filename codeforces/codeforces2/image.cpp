#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char n=0;
        set<char>a;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
              cin>>n;
                a.insert(n);
            }
        }
        cout<<(a.size())-1<<endl;
    }
    return 0;
}
