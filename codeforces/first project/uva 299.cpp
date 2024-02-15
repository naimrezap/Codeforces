#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,j,s,p=0;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(i=1;i<=n-1;i++){
                j=i;
            while( j>0 && a[j-1]>a[j])
            {
                s=a[j];
                a[j]=a[j-1];
                a[j-1]=s;
                j--;
                p++;
            }
        }
    }

    cout<<"Optimal train swapping takes "<<p<<" swaps."<<endl;
    t--;
    }
    return 0;

}
