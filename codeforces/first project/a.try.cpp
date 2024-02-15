#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
        }
        for(int j=n-1;j>=0;j--)
        {
            if(a[j]==0)
                continue;
            else
            {
                cout<<j<<endl;
                break;
            }
        }
    }




    return 0;
}
