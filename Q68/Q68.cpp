#include <iostream>
#include <stack>
using namespace std;

struct Node 
{
    int data;
    Node *left, *right;

    Node(int value) 
{ 
        data = value;
        left = right = nullptr;
    }
};

void inOrderTraversal(Node* root) 
{
    stack<Node*> s; 
    Node* current = root;

    while (current != nullptr || !s.empty()) 
    {    
        while (current != nullptr) 
        {
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();
        cout << current->data << " "; 

        current = current->right;
    }
}

int main() 
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "In-order traversal: ";
    inOrderTraversal(root);

    return 0;
}
