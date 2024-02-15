    #include<bits/stdc++.h>
    using namespace std;
    struct node
    {
        struct node *prev;
        struct node *next;
        int data;
    };
    struct node *head;
    void insert_begin()
     {
       struct node *ptr=new node();
       int item;
       if(ptr == NULL)
       {
           cout<<"\nOVERFLOW";
       }
       else
       {
        cout<<"\nEnter Item value";
      cin>>item;
        if(head==NULL)
       {
           ptr->next = NULL;
           ptr->prev=NULL;
           ptr->data=item;
           head=ptr;
       }
       else
       {
           ptr->data=item;
           ptr->prev=NULL;
           ptr->next = head;
           head->prev=ptr;
           head=ptr;
       }
       cout<<"\nNode inserted\n";
    }}
    void insert_last()
     {
       struct node *temp;
       int item;
       struct node *ptr=new node();
       if(ptr == NULL)
       {
           cout<<"\nOVERFLOW";
       }
       else
       {
           cout<<"\nEnter value";
           cin>>item;
            ptr->data=item;
           if(head == NULL)
           {
               ptr->next = NULL;
               ptr->prev = NULL;
               head = ptr;
           }
           else
           {
              temp = head;
              while(temp->next!=NULL)
              {
                  temp = temp->next;
              }
              temp->next = ptr;
              ptr ->prev=temp;
              ptr->next = NULL;
              }

           }
         cout<<"\nnode inserted\n";
        }
    void insert_any()
       {
       struct node *temp;
       int item,loc,i;
      struct node *ptr=new node();
       if(ptr == NULL)
       {
           cout<<"\n OVERFLOW";
       }
       else
       {
           temp=head;
           cout<<"Enter the location";
           cin>>loc;
           for(i=0;i<loc-2;i++)
           {
               temp = temp->next;
               if(temp == NULL)
               {
                   cout<<"\n There are less than"<< loc;
                   return;
               }
           }
           cout<<"Enter value";
           cin>>item;
           ptr->data = item;
           ptr->next = temp->next;
           ptr -> prev = temp;
           temp->next = ptr;
           temp->next->prev=ptr;
           cout<<"\nnode inserted\n";
       }
    }
    void delete_begin()
     {
        struct node *ptr;
        if(head == NULL)
        {
            cout<<"\n UNDERFLOW";
        }
        else if(head->next == NULL)
        {
            head = NULL;
            free(head);
            cout<<"\nnode deleted\n";
        }
        else
        {
            ptr = head;
            head = head -> next;
            head -> prev = NULL;
            free(ptr);
            cout<<"\nnode deleted\n";
        }

    }
    void delete_last()
     {
        struct node *ptr;
        if(head == NULL)
        {
            cout<<"\n UNDERFLOW";
        }
        else if(head->next == NULL)
        {
            head = NULL;
            free(head);
            cout<<"\nnode deleted\n";
        }
        else
        {
            ptr = head;
            while(ptr->next != NULL)
            {
                ptr = ptr -> next;
            }
            ptr -> prev -> next = NULL;
            free(ptr);
            cout<<"\nnode deleted\n";
        }
    }
    void delete_any()
 {
        struct node *ptr, *temp;
        int val;
        cout<<"\n Enter the data after which the node is to be deleted : ";
        cin>>val;
        ptr = head;
        while(ptr -> data != val)
        ptr = ptr -> next;
        if(ptr -> next == NULL)
        {
            cout<<"\nCan't delete\n";
        }
        else if(ptr -> next -> next == NULL)
        {
            ptr ->next = NULL;
        }
        else
        {
            temp = ptr -> next;
            ptr -> next = temp -> next;
            temp -> next -> prev = ptr;
            free(temp);
            cout<<"\nnode deleted\n";
        }
    }
    void display()
     {
        struct node *ptr;
        cout<<"\n printing values...\n";
        ptr = head;
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    void search()
      {
        struct node *ptr;
        int item,i=0,flag;
        ptr = head;
        if(ptr == NULL)
        {
            cout<<"\nEmpty List\n";
        }
        else
        {
            cout<<"\nEnter item which you want to search?\n";
            cin>>item;
            while (ptr!=NULL)
            {
                if(ptr->data == item)
                {
                    cout<<"\nitem found at location  "<<i+1<<endl;
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
                i++;
                ptr = ptr -> next;
            }
            if(flag==1)
            {
                cout<<"\nItem not found\n";
            }
        }
        cout<<"\npress 1....";
        int r;
        cin>>r;
        if(r==1)return;


    }
    void sorta() {
    struct node *current = NULL, *index = NULL;
    int temp;

    if(head == NULL) {
        return;
    }
    else {

        for(current = head; current->next != NULL; current = current->next) {
            for(index = current->next; index != NULL; index = index->next) {
                if(current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
            }
        }
    }
}

    int main ()
    {
    int choice =0;
        while(choice != 10)
        {
            cout<<"\nMain Menu\n";

            cout<<"\n1.Insert begin\n2.Insert last\n3.Insert any randomly\n4.Delete from Beginning\n  5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.sort\n10. Exit";
            cout<<"\nEnter your choice?\n";
            cin>>choice;
            if(choice==1) insert_begin();
            else if(choice==2) insert_last();
            else if(choice==3)  insert_any();
            else if(choice==4) delete_begin();
            else if(choice==5) delete_last();
            else if(choice==6) delete_any();
             else if(choice==7) search();
            else if(choice==8)  display();
            else if(choice==9) sorta();
            else if(choice==10) exit(0);
            else cout<<"Please enter valid choice";

             system("CLS");
                display();


            }


}

