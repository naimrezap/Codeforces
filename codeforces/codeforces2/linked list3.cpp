#include<bits/stdc++.h>
using namespace std;
class node{
   public:
        int data;
        node *next;
        node(int i)
        {
            data=i;
            next=NULL;
        }



};
 void insertt1(node* &head)
        {
            int i;
            cin>>i;
            node *newnode=new node(i);
           newnode->next=head;
           head=newnode;


        }
      void  insert2(node* &head)
        {
            int i;
            cin>>i;
            node *newnode=new node(i);
            node *ptr;
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=newnode;
        }
        void display(node* &head)
        {
            while(head->next!=NULL)
            {
                cout<<head->data;
                head=head->next;
            }
        }

int main()
{
    node *head;


    insertt1(head);
    insertt1(head);
    insertt1(head);
   insert2(head);
    insert2(head);
    display(head);

    return 0;
}
