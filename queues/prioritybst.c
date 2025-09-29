#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
    int data;
    int priority;
    struct node* left;
    struct node* right;
} Node;
Node* newNode(int data, int priority)        
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->priority = priority;
    temp->left = temp->right = NULL;
    return temp;
}
Node* insert(Node* root, int data, int priority) 
{
    if (root == NULL) 
    {
        return newNode(data, priority);
    }
    if (priority < root->priority) 
    {
        root->left = insert(root->left, data, priority);
    } 
    else 
    {
        root->right = insert(root->right, data, priority);
    }
    return root;
}
Node* findMin(Node* root) 
{
    while (root && root->left != NULL) 
    {
        root = root->left;
    }
    return root;
}
Node* deleteMin(Node* root) 
{
    if (root == NULL) return NULL;
    if (root->left == NULL) 
    {
        Node* rightChild = root->right;
        free(root);
        return rightChild;
    }
    root->left = deleteMin(root->left);
    return root;
}
int peek(Node* root) 
{
    Node* minNode = findMin(root);
    if (minNode == NULL) 
    {
        printf("Priority Queue is empty.\n");
        return -1;
    }
    return minNode->data;
}
void inorder(Node* root) 
{
    if (root == NULL) return;
    inorder(root->left);
    printf("%d:%d ", root->data, root->priority);
    inorder(root->right);
}
void freeBST(Node* root) 
{
    if (root == NULL) return;
    freeBST(root->left);
    freeBST(root->right);
    free(root);
}
int isEmpty(Node* root) 
{
    return (root == NULL);
}
int main() 
{
    Node* root = NULL;
    int choice, data, priority;
    printf("--- Priority Queue Using BST ---\n");
    printf("1. Insert\n");
    printf("2. Delete Top \n");
    printf("3. Peek Top\n");
    printf("4. Display Queue\n");
    printf("5. Exit\n");
    while (1) 
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter priority : ");
                scanf("%d", &priority);
                root = insert(root, data, priority);
                break;
            case 2:
                if (!isEmpty(root)) 
                {
                    Node* minNode = findMin(root);
                    root = deleteMin(root);
                } 
                else 
                {
                    printf("Priority Queue is empty.\n");
                }
                break;
            case 3:
                if (!isEmpty(root)) 
                {
                    int topData = peek(root);
                    printf("Element at top: %d\n", topData);
                } 
                else 
                {
                    printf("Priority Queue is empty.\n");
                }
                break;
            case 4:
                if (!isEmpty(root)) 
                {
                    printf("Priority Queue (data:priority): ");
                    inorder(root);
                    printf("\n");
                } 
                else 
                {
                    printf("Priority Queue is empty.\n");
                }
                break;
            case 5:
                freeBST(root);
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
