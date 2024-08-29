#ifndef STACK_H
#define STACK_H
#define StackEntry int

typedef struct Stacknode {
    StackEntry entry;
    struct Stacknode *next; 
} StackNode;

typedef struct stack {
    StackNode *top;
    int size;
} Stack;

void initialize(Stack *ps);
int isFull(Stack *ps);
int isEmpty(Stack *ps);
void push(Stack *ps, StackEntry e);
void pop(Stack *ps, StackEntry *e);
int StackSize(Stack *ps);
void clearStack(Stack *ps);

#endif
