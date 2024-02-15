#include<bits/stdc++.h>
#define max1 1000000000
using namespace std;
int main()
{
    int t;
    cin>>t;while(t--)
    {
        int n,h,m,minmi,min1=max1;
    cin>>n>>h>>m;
    int totalmn=h*60+m;
    for(int i=0; i<n; i++)
    {
        int hm,mn;
        cin>>hm>>mn;
        if(h<hm)
        {
            minmi=(hm*60+mn)-totalmn;
        }
        else if(h==hm)
        {
            if(m<=mn)
                minmi=mn-m;
            else
                minmi=24*60-(m-mn);
        }
        else
        {
            minmi=(24*60-totalmn)+hm*60+mn;
        }
        min1=min(min1,minmi);
    }
    cout<<min1/60<<" "<<min1%60<<endl;
    }

    return 0;
}
