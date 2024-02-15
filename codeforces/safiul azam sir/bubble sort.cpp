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
    int t;
    cin>>t;
    while(t--)
    {


        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                }
            }
        }
        print(a);

    }


    return 0;
}
