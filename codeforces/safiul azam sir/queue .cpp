 #include<bits/stdc++.h>
using namespace std;
int font=-1,rear=-1,siz=5,que[5];
void insert1()
{
    int v;
    if(rear==siz-1)
        cout<<"the queue is over flow"<<endl;
    else if(font==-1)
    {

            font++;
        cin>>v;
        rear++;
        que[font]=v;
    }
    else{
        rear++;
        cin>>v;
        que[rear]=v;
    }
}
void delete1()
{
    if(font==-1)
        cout<<"que is underflow"<<endl;
    else
    {
        font++;
    }
}
void display()
{
    if(font==-1 || rear==-1)
        cout<<"QUE is empty"<<endl;
    else
    {
        cout<<"\n\nThe element of the queue is:";
        for(int i=font; i<=rear; i++)
            cout<<que[i]<<" ";
    }
}
int main()
{
        while(1){
                system("CLS");
        cout<<"the present array is..."<<endl;
         display();
        cout<<"\n\n\nPress 1 to enter value: "<<endl;
        cout<<"Press 2 to delete value: "<<endl;
        cout<<"Press any other key to exit......"<<endl;
        int s;
        cin>>s;
        if(s==1)
        {
            cout<<"Enter the value....";
            insert1();

            }
        else if(s==2)
        {
            delete1();

            }
        else
        {
            cout<<"the process is end"<<endl;
            break;
        }
    }
    return 0;
}
