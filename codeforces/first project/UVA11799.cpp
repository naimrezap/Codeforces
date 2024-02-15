#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

   for(int j=1;j<=t;j++)
    {
        int n,i;
        cin>>n;
        int s[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int b=s[0];
        for(i=1;i<n;i++)
        {
            if(s[i]>b)
            {
                b=s[i];
            }
        }
        cout<<"Case "<<j<<": "<<b<<endl;
    }
    return 0;
}
