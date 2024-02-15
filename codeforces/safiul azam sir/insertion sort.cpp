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
        for(int i=1;i<n;i++)
        {
            int m=a[i];
            int j=i-1;
            while(j>=0 && a[j]>m)
            {
               a[j+1]=a[j];
                j--;

            }
           a[j+1]=m;
        }
        print(a);




    return 0;
}
