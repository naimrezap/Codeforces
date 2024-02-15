#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

           int r,in=0;
           cin>>r;
         vector<int>v;
           vector<int>v1;
           int a[r][r-1];
           for(int j=0;j<r;j++)
           {
               for(int i=0;i<r-1;i++)
               cin>>a[j][i];

              // cout<<endl;
           }

           for(int i=0;i<r;i++)
           {
               v.push_back(a[i][0]);
           }
           for(int i=0;i<r;i++)
           {
               if(v[i]!=v[i+1] && v[i]==v[i+2])
               {
                    in=i+1;

                    break;
               }
               else if(v[i]==v[i+1] && v[i]!=v[i+2])
               {
                    in=i+2;

                    break;
               }
               else if(v[i]!=v[i+1] && v[i+1]==v[i+2])
               {
                    in=i;

                    break;
               }

           }
           for(int i=0;i<r-1;i++)
           {
               v1.push_back(a[in][i]);
           }
           if(in>0)
            cout<<a[0][0]<<" ";
           else
            cout<<a[1][0]<<" ";
             for(int i=0;i<r-1;i++)
           {
               cout<<v1[i]<<" ";
           }
           cout<<endl;


    }
    return 0;
}

