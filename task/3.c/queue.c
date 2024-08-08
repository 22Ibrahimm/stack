#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int CreateQueue(queue *pq)
{
if(pq!=NULL){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
    return 1;
}
else{
    return -1;
}
}
int enqueue(int item,queue *pq)
{

    if(pq!=NULL){
            pq->rear=(pq->rear+1)%MAX_QUEUE;
            pq->entry[pq->rear]=item;
            pq->size++;
            return 1;
    }
 else{
    return -1;
}
}
int dequeue(int *item,queue *pq)
{
    if( pq == NULL || item == NULL){
     return -1;
    }
    else{
    *item=pq->entry[pq->front];
    pq->front=(pq->front+1)%MAX_QUEUE;
    pq->size--;
    return 1;
    }
}
int EmptyQueue(queue *pq)
{
    if(pq!=NULL){
    return !pq->size;
    }
    else{
        return -1;
    }
}
int FullQueue(queue *pq)
{
    if(pq!=NULL){
    return pq->size==MAX_QUEUE;
    }
    else{
        return -1;
    }
}
int QueueSize(queue *pq)
{
     if(pq!=NULL){
    return pq->size;
    }
    else{
        return -1;
    }
}
int ClearQueue(queue *pq)
{
    if(pq!=NULL){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
    }
    else{
        return -1;
    }
}
int DisplayQueue(queue *pq,void (*pf)(int))
{
    if (pq == NULL || pf == NULL) {
            return -1;
    }
    else{
            int i,s;
        for(i=pq->front,s=0;s<pq->size;s++){
            (*pf)(pq->entry[i]);
            i=(i+1)%MAX_QUEUE;
        }
        return 1;
    }

}
