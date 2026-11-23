#include <iostream>
#include <stdexcept>
using namespace std;

struct Node
{
    int data;
    Node* pLeft;
    Node* pRight;
    Node(int value): data(value), pLeft(nullptr), pRight(nullptr){}
};

Node* insert(Node* root, int key)
{
    if(root == nullptr)
    {
        return new Node(key);
    }

    if(key < root->data)
    {
        root->pLeft = insert(root->pLeft, key);
    }

    else if(key > root->data)
    {
        root->pRight = insert(root->pRight, key);
    }
    else
    {
        return root;
    }

    return root;
}

Node* findMin(Node* node)
{
    while(node->pLeft != nullptr)
    {
        node = node->pLeft;
    }
    return node;
}
Node* deleteNode(Node* root, int key)
{
    if(root == nullptr)
    {
        return root;
    }
    if(key < root->data)
    {
        root->pLeft = deleteNode(root->pLeft, key);
    }
    else if(key > root->data)
    {
        root->pRight = deleteNode(root->pRight, key);
    }
    else
    {
        if(root->pRight==nullptr)
        {
            Node* temp = root->pLeft;
            delete root;
            return temp;
        }
        if(root->pLeft==nullptr)
        {
            Node* temp = root->pRight;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->pRight);
        root->data = temp->data;
        root->pRight = deleteNode(root->pRight, temp->data);
    }
    return root;
}

int search(Node* root, int key)
{
    Node* pNow = root;
    while(pNow != nullptr)
    {
        if (key == pNow->data)
            return pNow->data;
        else if(key < pNow->data)
            pNow = pNow->pLeft;
        else
            pNow = pNow->pRight;
    }
    throw runtime_error("Element not found");
}

void deleteTree(Node* root)
{
    if(root == nullptr)
    {
        return;
    }

    deleteTree(root->pLeft);
    deleteTree(root->pRight);

    delete root;
}

void inorder(Node* root)
{
    if(root == nullptr) return;
    inorder(root->pLeft);
    cout<< root->data << " ";
    inorder(root->pRight);
}

void preorder(Node* root)
{
    if(root == nullptr) return;
    cout<< root->data << " ";
    preorder(root->pLeft);
    preorder(root->pRight);

}

void postorder(Node* root)
{
    if(root == nullptr) return;
    postorder(root->pLeft);
    postorder(root->pRight);
    cout<< root->data << " ";
}

int main()
{
    Node* root = nullptr;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    inorder(root);
    cout << endl;
    root = deleteNode(root, 5);
    inorder(root);
}
