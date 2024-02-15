
#include<bits/stdc++.h>
using namespace std;
int front=0,rear=0,n;
void insert1(int* que)
{

     int x;
     cin>>x;

    if(rear==n && front==0)
     {
         cout<<"queue is over flow.."<<endl;
     }
     else
     {
         rear++;
         rear=rear%n;
         que[rear]=x;
     }
}
void display(int* que)
{
    if(front==0 && rear ==0)
    {
        cout<<"que is under flow"<<endl;
    }
    else
    {

        cout<<"the array element are.."<<endl;
        for(int i=front;i<=rear;i++)
        {
            cout<<que[i]<<" ";
        }
    }
}
void delete1(int* que)
{
    if(front==rear)
        cout<<"there is no element.."<<endl;
    else
        front++;
}
int main()
{
    cout<<"\nenter the array size.."<<endl;

    cin>>n;
    int que[n];
    while(1)
    {
      cout<<"\n\npress 1 to insert.."<<endl;
      cout<<"press 3 to display.."<<endl;
      cout<<"press 2 to delete.."<<endl;
      int w;
      cin>>w;
      if(w==1)
      {

          insert1(que);
      }
      else if(w==2)
      {
           display(que);
      }
      else if(w==3)
      {
          delete1(que);
      }
    }



    return 0;
}
