#include<bits/stdc++.h>
using namespace std;
class Bi_Tr
{
public:
    int data;
    Bi_Tr* left;
    Bi_Tr* right;
};
Bi_Tr* create_Node(int data)
{
    Bi_Tr* newNode = new Bi_Tr();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Bi_Tr* insertNode(Bi_Tr* root, int data)
{
    if(root==NULL) root = create_Node(data);
    else if(data <= root->data) root->left = insertNode(root->left, data);
    else root->right = insertNode(root->right, data);
    return root;
}
Bi_Tr* FindMin(Bi_Tr* root)
{
    while(root->left!=NULL) root = root->left;
    return root;
}
Bi_Tr* DeleteNode(Bi_Tr* root, int key)
{
    if(root==NULL) return root;
    else if(key < root->data) root->left = DeleteNode(root->left,key);
    else if(key>root->data) root->right = DeleteNode(root->right,key);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        else if(root->right==NULL)
        {
            Bi_Tr* temp = root;
            root = root->left;
            delete temp;
        }
        else if(root->left == NULL)
        {
            Bi_Tr* temp=root;
            root=root->right;
            delete temp;
        }
        else
        {
            Bi_Tr* mini=FindMin(root->right);
            root->data = mini->data;
            root->right = DeleteNode(root->right, mini->data);
        }
    }
    return root;
}
void pre(Bi_Tr* root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}
void in(Bi_Tr* root)
{
    if(root==NULL) return;
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}
int main()
{

    Bi_Tr* root = NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        root = insertNode(root, n);
    }

    cout<<endl;
    while(1)
    {
    cout<<"\n\nIf you want to delete any node, press 1....and enter the value....\n\n Press 2 visit inorder\n\n"<<
     "Press 3 to preorder visit.\n\n Press any other key to break...\n\n"<<endl;
    int pp;
    cin>>pp;
    if(pp==1)
    {
        int k;
        cin>>k;
        DeleteNode(root,k);
    }
    else if(pp==2) in(root);
    else if(pp==3) pre(root);
    else break;
    }

    return 0;
}
