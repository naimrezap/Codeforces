#include<bits/stdc++.h>

using namespace std;
int n=9;
 int a[9];
 void print(int a[])
 {
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }
int main()
{
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            int m=i;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[m])
                {
                    m=j;
                }
            }
            if(m!=i)
            swap(a[m],a[i]);

        }
        //print(a);

        for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;


    return 0;
}
