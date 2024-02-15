#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n=0,b=0;
        string a;
        cin>>a;
         n=a.length();
        if(1<=n<=52){
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>i;j--)
            {
                if(a[i]==a[j])
                {
                    b++;
                    break;
                }
            }
        }
        if(b!=n/2)
        {
            cout<<a<<" --- not double char"<<endl;

        }
        else
            cout<<a<<" ---double char"<<endl;

        cout<<endl;}

        t--;
    }

    return 0;
}
