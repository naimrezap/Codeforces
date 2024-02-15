#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void pre(struct Node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    pre(node->left);
    pre(node->right);
}
void post(struct Node* node)
{
    if (node == NULL)
        return;

    post(node->left);
    post(node->right);
    cout << node->data << " ";
}
void in(struct Node* node)
{
    if (node == NULL)
        return;

    in(node->left);
    cout << node->data << " ";
    in(node->right);
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Inorder traversal ";
    in(root);

    cout << "\nPreorder traversal ";
    pre(root);

    cout << "\nPostorder traversal ";
    post(root);
return 0;
}
