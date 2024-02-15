#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sm=0;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        b=n;n=n-1;
        if(b%2==0)
        {
            a=(n*(n+1)/2)-((n/2)*(n/2+1))/2;
            a=a*2;

        }
        else {a=(n*(n+1)/2)-((n/2)*(n/2+1))/2;
          a=a*2+(n/2);
        }
       // cout<<a<<endl;
        vector<int>v;
        if(b==1)
            cout<<0<<endl;
        else
        {
             for(int i=0; i<(s.size())/2; i++)
        {
            if(s[i]=='L')
                sm+=i;
            else
                sm+=s.size()-i-1;
        }
        for(int i=s.size()-1; i>=(s.size())/2; i--)
        {
            if(s[i]=='L')
                sm+=i;
            else
                sm+=s.size()-i-1;
        }



        int z1=1000000;
       // cout<<sm<<endl;
       while(1)
       {
           int i=0,j=0,w=0,r=0;
           for(;i<n/2;)
           {
               if(s[i]=='L'){
                w=(sm+(b-i-1));
                i++;
                break;}

           }
           for(;j>=n/2;)
           {
               if(s[j]=='R')
               {
                   r=(j);
                   sm+=j;
                   j--;
                   break;

               }
           }
           int z=min(w,r);
            z1=min(z1,z);
           // int aa=max(aa,max(w,r));

            v.push_back(z);

           if(sm>=a)
            break;
       }
       sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
           cout<<v[i]<<" ";
       }
       int q=b-v.size();
       while(q--)
       {
           cout<<sm<<" ";
       }
        }
       cout<<endl;
    }
    return 0;
}
