#include <iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = nullptr;
    }
};

void inorder_traversal(Node *root)
{
    if(root != nullptr)
    {
        inorder_traversal(root->left);
        cout << root->key << " ";
        inorder_traversal(root->right);
    }
}

void preorder_traversal(Node *root)
{
    if(root != nullptr )
    {
        cout << root->key << " ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void postorder_traversal(Node *root)
{
    if(root != nullptr )
    {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout << root->key << " ";
    }
}


int main()
{
    Node *root = new Node(10);
    root->left=new Node(20);
    root->right=new Node(40);
    root->right->left = new Node(50);
    root->right->right = new Node(60);
    root->left->left = new Node(30);
    cout << "Inorder traversal is: ";
    inorder_traversal(root);
    cout << "\nPreorder traversal is: ";
    preorder_traversal(root);
    cout << "\nPostorder traversal is: ";
    postorder_traversal(root);
}
