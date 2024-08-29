#include <stdio.h>
#include "queue.h"

int main()
{
    Queue queue;
    initialize(&queue);

    Append(&queue, 10);
    Append(&queue, 20);
    Append(&queue, 30);

    int dequeuedValue;
    Serve(&queue, &dequeuedValue);

    return 0;
}
