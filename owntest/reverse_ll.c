#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* next;
} Node;

void disp(Node* head)
{ 
    while(head)
    {
        printf("%d  ", head->data);
        head = head -> next;
    }
    printf("\n");
}

Node* reverse(Node* head){
    if(head && head->next)
    {
        Node* prev = NULL;
        Node* cur = head;
        Node* next = cur->next;
        while(next){
            cur->next = prev;
            prev = cur;
            cur = next;
            next = cur->next;
        }
        cur->next = prev;
        return cur;
    }
    else
        return head;
    
}
Node* addToBeginning(Node* head, int data){
    Node* newHead = (Node*)malloc(sizeof(Node));
    newHead->data = data;
    newHead->next = head;

    head = newHead;
    return newHead;
}

int main()
{
    Node* head;
    head = (Node*)malloc(sizeof(Node));
    head -> data = 10;
    Node* sec;
    sec = (Node*)malloc(sizeof(Node));
    sec -> data = 20;  
    head -> next = sec;

    Node* third;
    third = (Node*)malloc(sizeof(Node));
    third -> data = 30; 
    sec->next = third;
    disp(head);

    head = reverse(head);
    disp(head);
    return 0;
}