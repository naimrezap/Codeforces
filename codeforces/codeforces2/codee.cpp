#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,q,s;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];

        }
        if(n==1)
            q=1;
        else
        {
            sort(b,b+n);
            for(int i=0;i<n-1;i++)
            {
                for(int j=1;j<n;j++)
                {
                    if(b[j]%b[i]==1)
                    {
                        q=1;
                        break;
                    }
                }
                if(q==1)
                    break;
            }
            if(q==1)
                cout<<0<<endl;
          else  if(q!=1)
            {
                for(int i=n-1;;i--)
                {
                    if(a[i]%i==1)
                    {
                        q++;
                        break;

                    }
                    else
                    {
                        s++;break;
                    }
                }
                 if(q==1 && s==1)
                    cout<<1<<endl;
                 else if(q==1)
                    cout<<2<<endl;
                 else
                    cout<<3<<endl;
            }


        }
    }
    return 0;
}
