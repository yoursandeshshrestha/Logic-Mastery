#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int data) 
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void inOrderTraversal(struct Node* root) 
{
    struct Node* stack[100]; 
    int top = -1;            
    struct Node* current = root;

    while (current != NULL || top != -1) 
    {    
        while (current != NULL) 
        {
            stack[++top] = current; 
            current = current->left;
        }

        current = stack[top--];
        printf("%d ", current->data); 

        current = current->right;
    }
}

int main() 
{

    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("In-order traversal: ");
    inOrderTraversal(root);

    return 0;
}
