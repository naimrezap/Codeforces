#include<bits/stdc++.h>
using namespace std;
int hfc(int a,int b)
{
    int num1=a,num2=b;
    while(num1>0)
    {
        if(num2%num1==0)
        {
            num2=num1;
            num1=0;
        }
        else
        {
            num2=num1;
            num1=num2%num1;
        }
    }
    return num2;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0,q=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=2;j<=n;j++)
            {
                 q=(hfc(i,j)*(i*j));
                if(q/hfc(i,j)<=3)

                k++;
            }

        }
        cout<<k<<endl;
        q=0;

    }
    return 0;
}
