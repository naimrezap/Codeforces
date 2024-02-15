#include<iostream>
using namespace std;
int main()
{
    int n,k,i,s=0;
    cin>>n>>k;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];

    }
    for(i=0;i<n;i++)
    {
        if(p[i]>k)
            s++;
            else
                break;

    }
    cout<<s<<endl;

    return 0;
}
