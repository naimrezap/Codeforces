#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
    int n;

    cin>>n;
    cout<<endl<<"\nEnter the array element: "<<endl;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"\nthe sorted array is: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    int mid,l=0,r=n-1,num,temp=0;
    cout<<"\n\nEnter the desire element: ";
    cin>>num;
    cout<<endl;
    while(r>=l)//1 2 3
    {
        mid=(l+r)/2;
        if(arr[mid]==num)
        {
            temp=mid;
            break;
        }
        else if(arr[mid]>num)
            r=mid-1;
        else
            l=mid+1;
    }
    if(temp==0)
        cout<<"\n\n"<<num<<" is not found at the given array"<<endl;
    else
    cout<<"\n\n"<<num<<" is found at the index no. :"<<temp+1<<endl;

    return 0;
}
