#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int CreateQueue(queue *pq){
if(pq){
    CreateStack(&pq->s1);
    CreateStack(&pq->s2);
    return 1;
}
else{
    return -1;
}
}
int enqueue(int item,queue *pq){
if(pq){
     push(item,&pq->s1);
     return 1;
}
else{
    return -1;
}

}
int dequeue(int *item,queue *pq){
if(item == NULL || pq == NULL){
    return -1;
}
else{
    while(!StackEmpty(&pq->s1)){
                int temp;
                pop(&temp, &pq->s1);
                push(temp, &pq->s2);
    }
    pop(&item,&pq->s2);
    return -1;
}
}
int QueueSize(queue *pq) {
    if (pq != NULL) {
        return StackSize(&pq->s1) + StackSize(&pq->s2);
    }
    return -1;
}
void ClearQueue(queue *pq) {
    if (pq != NULL) {
        ClearStack(&pq->s1);
        ClearStack(&pq->s2);
    }
}
void DisplayQueue(queue *pq, void (*pf)(int)) {
    if (pq == NULL || pf == NULL) {
            return -1;
    }
    else{
        int temp;
        while (!StackEmpty(&pq->s2)) {
            pop(&temp, &pq->s2);
            (*pf)(temp);
            push(temp, &pq->s1);
        }

        for (int i = pq->s1.top - 1; i >= 0; --i) {
            (*pf)(pq->s1.arr[i]);
        }
        while (!StackEmpty(&pq->s1)) {
            pop(&temp, &pq->s1);
            push(temp, &pq->s2);
        }
    }
}
void DisPlay(int x){
printf("%i\n",x);
}
int main()
{
  queue q;
  ClearQueue(&q);

    return 0;
}
