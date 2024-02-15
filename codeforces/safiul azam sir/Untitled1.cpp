#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }

};
node* insert1(node* root)
    {
        int s;
        cin>>s;
        node* newnode=new node(s);
        root->next=newnode;
        root



    }
int main()
{
    int n;
    node *root;
    root->next=NULL;

    insert1(root);


    return 0;
}
