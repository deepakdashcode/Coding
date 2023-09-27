#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* next;
} Node;
Node* head = NULL;
Node* tail = NULL;
void disp(){
    Node* temp = head;
    while(temp){
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void enque(int data){
    if(head){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        tail->next = newNode;
        tail = newNode;
    }
    else{
        head = (Node*)malloc(sizeof(Node));
        tail = head;
        tail->data = data;
    }
}
void deque(){
    if(!head){
        printf("Can not deque from empty queue\n");
    }
    else if(head == tail){
        free(head);
        head = NULL;
        tail = NULL;
    }
    else{
        Node* temp = head;
        head = head -> next;
        free(temp);
    }
}
int main(){
    enque(10);
    enque(30);
    enque(50);
    disp();
    deque();
    disp();
    deque();
    
    return 0;
}