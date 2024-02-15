#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int a)
    {
        data=a;
        right=NULL;
            left=NULL;
    }
};
node* insert1(node* &root, int x)
{
    node* newnode=new node(x);
    if(root==NULL)
    {
        root=newnode;
    }
    else if(root->data>x)
    {
        root->left=insert1(root->left,x);
    }
    else{
        root->right=insert1(root->right,x);
    }
    return root;
}
void traversein(node* root)
{
    if(root==NULL)
        return;
    traversein(root->left);
    cout<<root->data<<" ";
    traversein(root->right);
}
node* searching(node* root,int r)
{
    int t=0;
    if(root==NULL)
       {
         cout<<"no";
         return 0;
       }
    else if(root->data==r)
{
    cout<<"FOUND"<<endl;
    return 0;
}
    else
    {
        if(root->data>r)
        {
            root->left=searching(root->left,r);

        }
        else
            root->right=searching(root->right,r);
    }

}
int main()
{
   node *root=NULL;
   insert1(root,4);
   insert1(root,3);
   insert1(root,1);
   insert1(root,7);
   traversein(root);
   searching(root,11);

    return 0;
}
