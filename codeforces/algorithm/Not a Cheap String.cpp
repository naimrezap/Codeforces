#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
      vector<int>v(5,0);
       int a[n][5];

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<5;j++)
           {
               cin>>a[i][j];
               if(a[i][j]==1)
               {
                   v[j]=1;;

               }
           }
       }
       int cc=v.count(v.begin(),v.end(),1);
    }
    return 0;
}
