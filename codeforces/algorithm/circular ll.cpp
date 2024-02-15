#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert_begin()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the node data?");
        scanf("%d",&item);
        ptr -> data = item;
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = head;
        }
        else
        {
            temp = head;
            while(temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp -> next = ptr;
            head = ptr;
        }
        printf("\nnode inserted\n");
    }

}
void insert_last()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter Data?");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = head;
        }
        else
        {
            temp = head;
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
            temp -> next = ptr;
            ptr -> next = head;
        }

        printf("\nnode inserted\n");
    }

}

void delete_begin()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }

    else
    {
        ptr = head;
        while(ptr -> next != head)
            ptr = ptr -> next;
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("\nnode deleted\n");

    }
}
void delete_last()
{
    struct node *ptr, *preptr;
    if(head==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if (head ->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");

    }
    else
    {
        ptr = head;
        while(ptr ->next != head)
        {
            preptr=ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr -> next;
        free(ptr);
        printf("\nnode deleted\n");

    }
}

void search()
{
    struct node *ptr;
    int item,i=0,flag=1;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        if(head ->data == item)
        {
            printf("item found at location %d",i+1);
            flag=0;
        }
        else
        {
            while (ptr->next != head)
            {
                if(ptr->data == item)
                {
                    printf("item found at location %d ",i+1);
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
        }
        if(flag != 0)
        {
            printf("Item not found\n");
        }
    }

}

void display()
{
    struct node *ptr;
    ptr=head;
    if(head == NULL)
    {
        printf("\nnothing to print");
    }
    else
    {
        printf("\n printing values ... \n");

        while(ptr -> next != head)
        {

            cout<<ptr -> data<<" ";
            ptr = ptr -> next;
        }
        cout<< ptr -> data<<" ";
    }

}
void sorta()
{

    struct node *current = head, *index = NULL;
    int temp;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        do
        {
            index = current->next;
            while(index != head)
            {
                if(current->data > index->data)
                {
                    temp =current->data;
                    current->data= index->data;
                    index->data = temp;
                }
                index= index->next;
            }
            current =current->next;
        }
        while(current->next != head);
    }
}
int main ()
{
    int choice =0;
    while(choice != 8)
    {
        cout<<"\nMain Menu\n";

        cout<<"\n1.Insert begin\n2.Insert last\n3.Delete from Beginning\n 4.Delete from last\n5.Search\n6.Show\n7.sort\n8. exit";
        cout<<"\nEnter your choice?\n";
        cin>>choice;
        if(choice==1) insert_begin();
        else if(choice==2) insert_last();

        else if(choice==3) delete_begin();
        else if(choice==4) delete_last();

        else if(choice==5) search();
        else if(choice==6)  display();
        else if(choice==7)  sorta();
        else if(choice==8) exit(0);
        else cout<<"Please enter valid choice";

        system("CLS");
        display();


    }
}
