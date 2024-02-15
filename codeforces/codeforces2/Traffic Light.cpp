#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max1=0,s1=0,posi,f=0,r;
        char ch;
        cin>>n>>ch;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='g')
                s1++;
            else
            {
                r=1;
                max1=max(max1,s1);
                s1=0;
            }
            if(r==0)
            {
               f++;
            }
        }
        cout<<f<<" "<<max1<<endl;



    }
    return 0;
}
