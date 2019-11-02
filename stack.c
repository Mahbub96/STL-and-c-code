///making stack

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

#define MAX 5

struct stack{
    int items[MAX];
    int top;
}s;

typedef struct stack stack; ///for change type name to "struct stack" to "stack"

void createEmptyStack( stack *s){
    s->top = -1;
}


void push(stack *s){
    if(s->top == MAX-1)
        printf("stack is full\a\n");
    else{
        int newItem;
        s->top++;
        printf("\n\nEnter a value:");
        scanf("%d",&newItem);
        s->items[s->top] = newItem;

    }
}

void pop(stack *s){
    if(s->top == -1)
        printf("Stack is Empty \a\n\n");
    else{

        int value = s->items[s->top];
        printf("value: %d",value);
        s->top--;
    }
}


///Driver file
void menu(){
    int choice;
    do{
        printf("\n\n1.push\n2.pop\n3.exit");
        printf("\n\nEnter tour choice : ");
        scanf("%d",&choice);
    }while(choice > 4 || choice < 1);
    switch(choice){
    case 1:
        push(&s);
        menu();
        break;
    case 2:
        pop(&s);
        menu();
        break;
    case 3:
        exit(0);
    }
}
int main(){
    createEmptyStack(&s);
    menu();
    return 0;
}
