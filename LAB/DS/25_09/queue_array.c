#include<stdio.h>
#define MAX 10
void enque(int data, int arr[], int *l, int *r){
    if((*r) == MAX){
        printf("QUEUE IS FULL\n");
        return;
    }
    (*r) ++;
    arr[*r] = data;
    if(*l == -1) (*l) = 0;
}
void deque(int arr[], int *l, int *r){
    if(*r == -1) printf("Queue is empty\n");
    else{
        if((*l) == (*r))
        {
            *l = -1;
            *r = -1;
        }
        else{
            (*l) ++;
        }
    }
}
void print(int arr[], int l, int r){
    for(int i = l; i <= r; i ++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int main(){
int queue[MAX];
int l = -1, r = -1;
enque(30, queue, &l, &r);
enque(10, queue, &l, &r);
enque(20, queue, &l, &r);
enque(50, queue, &l, &r);

print(queue, l, r);
deque(queue, &l, &r);
print(queue, l, r);
return 0;
}