#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int CreateStack(stack *ps) {
    if (ps == NULL) {
        return -1;
    }
    CreateQueue(&(ps->q1));
    CreateQueue(&(ps->q2));
    return 0;
}
int Push(int item, stack *ps) {
    if (ps == NULL) {
        return -1;
    }
    if (FullQueue(&(ps->q1))) {
        return -2;
    }
    return enqueue(item, &(ps->q1));
}
int Pop(int *item, stack *ps) {
    if (ps == NULL || item == NULL) {
        return -1;
    }
    if (EmptyQueue(&(ps->q1))) {
        return -2;
    }

    while (QueueSize(&(ps->q1)) > 1) {
        int temp;
        dequeue(&temp, &(ps->q1));
        enqueue(temp, &(ps->q2));
    }
    dequeue(item, &(ps->q1));
    queue tempQueue = ps->q1;
    ps->q1 = ps->q2;
    ps->q2 = tempQueue;

    return 0;
}
int Top(int *item, stack *ps) {
    if (ps == NULL || item == NULL) {
        return -1;
    }
    if (EmptyQueue(&(ps->q1))) {
        return -2;
    }
    while (QueueSize(&(ps->q1)) > 1) {
        int temp;
        dequeue(&temp, &(ps->q1));
        enqueue(temp, &(ps->q2));
    }
    dequeue(item, &(ps->q1));
    enqueue(*item, &(ps->q2));
    queue tempQueue = ps->q1;
    ps->q1 = ps->q2;
    ps->q2 = tempQueue;

    return 0;
}
int EmptyStack(stack *ps) {
    if (ps == NULL) {
        return -1;
    return EmptyQueue(&(ps->q1));
}
}
int ClearStack(stack *ps) {
    if (ps == NULL) {
        return -1;
    }
    ClearQueue(&(ps->q1));
    ClearQueue(&(ps->q2));
    return 0;
}
void display(int e){
printf("%d\n",e);
}
int main()
{
    stack s;
CreateStack(&s);

    return 0;
}
