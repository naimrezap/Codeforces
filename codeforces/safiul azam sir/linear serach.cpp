#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array..."<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the element of the array.."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"enter the desire element..."<<endl;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"the element is found at index....";
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}
