
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l int
void naim()
{
    l n;
    cin>>n;
    vector<l>v(n),v1(n);
    l ones=0,z=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0)
        {
           z++;
           v1[i]=0;
        }
        else{
            ones++;
            v1[i]=1;
        }
    }
    l ans1=0,ans2=0;
    for(l i=n-1;i>0;i--)
    {
        if(v[i]==0)
        {
            ans1+=ones;
        }
        else
            ones--;
    }
    l on=0,zo=0;
    if(v1[0]==0) v1[0]=1;
    else if(v1[n-1]==1) v1[n-1]=0;
    else{
        for(int i=1,j=n-2;i<j;i++,j--)
        {
            if(v1[i]==0) {
                v1[i]=1;
                break;
            }
            if(v1[j]==1){
                v1[j]=0;
                break;
            }
        }
    }
    for(int i=n-1;i>0;i--)
    {
        if(v1[i]==0)
        {
            zo++;
        }
        else on++;
    }
    for(l i=n-1;i>0;i--)
    {
        if(v1[i]==0)
        {
            ans2+=on;
        }
        else
            on--;
    }
    cout<<max(ans1,ans2)<<endl;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        naim();
    }
}
