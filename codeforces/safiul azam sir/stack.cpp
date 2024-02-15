#include<bits/stdc++.h>
using namespace std;
int top=0;
void display(int *arr)
{
    if(top<=0)
        cout<<"stack is empty"<<endl;
    else
    {
        for(int i=0;i<top;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
    }
}
void push(int *arr,int a)
{
    arr[top]=a;
    top++;
}
void pop(int *arr)
{
    cout<<"the value which will be poped= "<<arr[top-1]<<endl;
    top--;


}
int main()
{
    int *arr,operation,value;
    cout<<"enter the size of stack:";
    int arr_size;
    cin>>arr_size;
    arr=new int[arr_size];
    while(1)
    {
        system("CLS");
        cout<<"current stack:";
        display(arr);
        cout<<" choose operation:"<<endl;
        cout<<"press 1 to push"<<endl<<"press 2 to pop up"<<endl<<" press 3 to exit\n\n"<<endl;

        cin>>operation;
        if(operation==1)
        {
            if(top>=arr_size)
                cout<<"array overflow"<<endl;
            else
            {
                cout<<"enter the number to push:";
                 cin>>value;
            push(arr,value);
            }

        }
        else if(operation==2)
        {
            if(top<=0)
            {
                cout<<"Array underflow"<<endl;

            }
            else
            {
                pop(arr);
            }
        }
        else
            break;
    }


    return 0;
}
