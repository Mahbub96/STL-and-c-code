///Queue Data structure

#include<stdio.h>
#include<windows.h>

#define max 7

struct queue{
    int top;
    int bottom;
    int items[max];
}q;

typedef struct queue queue;

void createEmptyQueue(queue *q){
    q->top = 0;
    q->bottom = 0;
}

void pop(queue *q){


    if(q->top == q->bottom){
        printf("\nQueue is Empty\a\n");
    }
    else{
        int pop;
        q->bottom++;
        q->bottom = q->bottom % max;
        pop = q->items[q->bottom];
        printf("\nPop value is : %d ",pop);

    }

}

void push(queue *q){
    q->top++;
    q->top = q->top % max;
    if( q->top == q->bottom){
        printf("\nQueue is full\a\n");
        if( q->top==0 )
            q->top = max-1;
        else
            q->top--;
    }
    else {
        int newValue;
        printf("\nEnter a int value :");
        scanf("%d",&newValue);

        q->items[q->top] = newValue;
    }
}


///Driver Code
void menu(){
    int choice;

    do{
        printf("\n\n1.push\n2.pop\n3.exit");
        printf("\n\nEnter tour choice : ");
        scanf("%d",&choice);
    }while(choice > 4 || choice < 1);

    switch(choice){
    case 1:
        push(&q);
        menu();
        break;
    case 2:
        pop(&q);
        menu();
        break;
    case 3:
        exit(0);
    }
}
int main(){
    createEmptyQueue(&q);
    menu();
    return 0;
}
