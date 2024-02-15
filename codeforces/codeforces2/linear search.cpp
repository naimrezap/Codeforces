
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
    int n;

    cin>>n;
    cout<<endl<<"\nEnter the array elements: "<<endl;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int pos=-1,num;
    cout<<"\n\nEnter the desire element: ";
    cin>>num;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
        cout<<"\n\n"<<num<<" is not found at the given array"<<endl;
    else
    cout<<"\n\n"<<num<<" is found at the index no. :"<<pos<<endl;

    return 0;
}
