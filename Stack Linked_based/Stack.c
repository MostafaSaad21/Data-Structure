#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void initialize(Stack *ps)
{
    ps->top = NULL;
    ps->size = 0;
}

int isFull(Stack *ps)
{
    return 0;
}

int isEmpty(Stack *ps)
{
    return ps->top == NULL;
}

void push(Stack *ps, StackEntry e)
{
    StackNode *pn = (StackNode *)malloc(sizeof(StackNode));

    pn->entry = e;
    pn->next = ps->top;
    ps->top = pn;
    ps->size++;
    printf("%d pushed into stack\n", e);
}

void pop(Stack *ps, StackEntry *e)
{
    if (isEmpty(ps)) {
        printf("Stack is empty\n");
        return;
    }
    StackNode *pn;
    *e = ps->top->entry;
    pn = ps->top;
    ps->top = ps->top->next;
    free(pn);
    ps->size--;
    printf("%d Popped from stack\n", *e);
}

void clearStack(Stack *ps)
{
    StackNode *pn = ps->top;
    StackNode *qn;
    while (pn) {
        qn = pn;
        pn = pn->next;
        free(qn);
    }
    ps->top = NULL;
    ps->size = 0;
}

int StackSize(Stack *ps)
{
    return ps->size;
}
