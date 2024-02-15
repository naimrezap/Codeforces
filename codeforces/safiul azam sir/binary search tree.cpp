#include<bits/stdc++.h>
typedef struct node node;
using namespace std;
class node
{
    public:
    int data;
     node *left;
     node *right;
     node(int s)
     {
         data=s;
         left=NULL;
         right=NULL;
     }

};
 node* insert1( node* &root,int s )
 {
        node* newnode=new node(s);
        if(root==NULL)
        {
            root=newnode;
        }
        else if(root->data>s)
        {
            root->left=insert1(root->left,s);
        }
        else
        {
            root->right=insert1(root->right,s);
        }
        return root;
 }
 void inorder(node *root)
 {
     if(root==NULL)
        return;
     inorder(root->left);
      cout<<root->data<<" ";
     inorder(root->right);
 }
  void preorder(node *root)
 {
     if(root==NULL)
        return;

      cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
 }
  void postorder(node *root)
 {
     if(root==NULL)
        return;
     postorder(root->left);

     postorder(root->right);
      cout<<root->data<<" ";
 }
int main()
{
     node *root;
    root=NULL;
    while(1)
    {
        //system("CLS");
        cout<<"Press 1 to insert...."<<endl;
        cout<<"press 2 to dispaly ..inorder."<<endl;
        cout<<"press 3 to display .. preorder"<<endl;
         cout<<"press 4 to display .. postorder"<<endl;
         cout<<"press 5 to exit"<<endl;
         int xx;
         cin>>xx;
         if(xx==1)
         {
             cout<<"enter the desire value.."<<endl;
             int r;
             cin>>r;
             insert1(root,r);

         }
         else if(xx==2)
         {
             cout<<"tree traversal using tree inorder traversal process: "<<endl;
            inorder(root);
         }
         else if(xx==3)
         {
              cout<<"tree traversal using tree preorder traversal process: "<<endl;
      preorder(root);
         }
         else if(xx==4)
         {
              cout<<"tree traversal using tree postorder traversal process: "<<endl;
                postorder(root);

         }
    }
    return 0;
}
