#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,s=0,p;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i+=1)//2 4 5 7
        {
            if(i%2==0)
            {
                if(a[i]%2==0)
                {
                    continue;
                }
                else
                {
                    if(n==1)
                        {
                            p=0;
                            break;
                        }

                    else {
                    for(int j=i+1;j<n;j=j+2)
                    {
                       if(a[j]%2==0)
                       {
                           p=1;
                           swap(a[i],a[j]);
                           s=s+j-i+1;
                           break;
                       }
                    }
                    }
                    if(p==0)
                    {
                        break;
                    }
                }
            }
            else
            {
                if(i%2==1)
                    continue;
                else
                {
                    if(n==1)
                    {
                        break;
                    }
                    else
                    for(int j=i+1;j<n;j=j+2)
                    {
                       if(a[j]%2==1)
                       {
                           p=1;
                           swap(a[i],a[j]);
                           s=s+j-i+1;
                           break;
                       }
                    }
                    if(p==0)
                    {
                        break;
                    }
                }
            }

        }
        if(p==0)
        {
           cout<<"-1"<<endl;
        }
        else
            {
                if(s==0)
                    cout<<0<<endl;
                else
                    cout<<s/2<<endl;
            }
        t--;
    }
    return 0;

}
