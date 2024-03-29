#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void dispLL(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}


int isEmpty(struct Node *top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct Node *top){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node* push(struct Node* top,int x){
    if(isFull(top)){
        printf("Stack Overflow");
    }else{
        struct Node *n=(struct Node *)malloc(sizeof(struct Node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}

int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("Stack Underflow");
    }else{
        struct Node *n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x;
    }
}

int main(){
    struct Node *top=NULL;
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    top=push(top,5);

    dispLL(top);

    int element=pop(&top);
    printf("\npopped element is: %d\n",element);
    
    dispLL(top);
}