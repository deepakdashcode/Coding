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
Tree* createTree(Tree* node, int l, int r){
    if(l == 0 && r == 0) return node;
    printf("Enter data in root : ");
    scanf("%d", &node->data);
    printf("Insert in left ? 1(Yes) or 0 (No) : ");
    scanf("%d", l);
    Tree* left;
    printf("Insert in right ? 1(Yes) or 0 (No) : ");
    scanf("%d", r);
    Tree* right;

    if(l == 0){
        right = createTree(right, 0, 1);
        node->left = 0;
        node->right = right;
    }
    else if(r == 0){
        left = createTree(left, 1, 0);
        node->left = left;
        node->right = 0;
    }
    else if(l == 0 && r == 0)
    {
        return node;
    }
    else{
        left = createTree(left, 1, 1);
        right = createTree(right, 1, 1);
        node->left = left;
        node->right = right;
    }

}
int main(){
    Tree* root = (Tree*)malloc(sizeof(Tree));
    root->data = 10;

    Tree* firLeft = (Tree*)malloc(sizeof(Tree));
    firLeft->data = 20;
    root->left = firLeft;
    firLeft->right = NULL;

    Tree* secLeft = (Tree*)malloc(sizeof(Tree));
    secLeft->data = 25;
    firLeft->left = secLeft;
    secLeft->left = NULL;
    secLeft->right = NULL;


    Tree* firRight = (Tree*)malloc(sizeof(Tree));
    firRight->data = 30;
    root->right = firRight;
    firRight->left = NULL;
    firRight->right = NULL;

    Tree* temp = (Tree*)malloc(sizeof(Tree));
    temp->data = 40;
    secLeft->right = temp;
    temp->left = 0;
    temp->right = 0;

    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    preOrder(root);

    Tree* root2 = createTree(root2, 1, 1);
    inOrder(root2);
    return 0;
}