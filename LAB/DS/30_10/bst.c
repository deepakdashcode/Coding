#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
    int data;
    struct tree* right;
    struct tree* left;
} Tree;
void inOrder(Tree* root){
    if(!root){
        return;
    }
    inOrder(root->left);
    printf("%d  ", root->data);
    inOrder(root->right);
}
void postOrder(Tree* root){
    if(!root){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d  ", root->data);
}
void preOrder(Tree* root){
    if(!root){
        return;
    }
    printf("%d  ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
Tree* createNode(int data) {
    Tree* newNode = (Tree*)malloc(sizeof(Tree));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Tree* insert(Tree* root, int data){
    if(root == NULL)
        return createNode(data);
    if(data < root->data)
        root->left = insert(root->left, data);
    else if(data > root->data)
        root->right = insert(root->right, data);
    
    return root;
}
Tree* findMin( Tree* node) {
     Tree* current = node;
    while (current->left != NULL) {
        current = current->left;
    }
    return current;
}
Tree* deleteNode(Tree* root, int data){
    if(root == NULL) return root;
    if(data < root->data) // check in left subtree
        root->left = deleteNode(root->left, data);
    else if(data > root->data) // Check in right subtree
        root->right = deleteNode(root->right, data);
    else{
        // Delete this node

        // Only One Child
        if(root->left == NULL){
            Tree* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Tree* temp = root->left;
            free(root);
            return temp;
        }

        Tree* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);

    }
    return root;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter %d elements : ", n);
    Tree* BST = 0;
    for(int i = 0; i < n; i ++)
    {
        int data;
        scanf("%d", &data);
        BST = insert(BST, data);
    }
    inOrder(BST);
    
    printf("\nEnter element to delete : ");
    int data;
    scanf("%d", &data);
    BST = deleteNode(BST, data);
    inOrder(BST);
    return 0;
}
/*
Enter n : 5
Enter 5 elements : 2 8 9 3 1
1  2  3  8  9
Enter element to delete : 3
1  2  8  9
*/