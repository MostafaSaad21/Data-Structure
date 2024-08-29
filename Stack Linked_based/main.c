#include <stdio.h>
#include "stack.h"

int main()
{
    Stack stack;
    initialize(&stack);

    push(&stack, 10);
   push(&stack, 20);
    push(&stack, 30);

    int poppedValue;
    pop(&stack, &poppedValue);

    return 0;
}
