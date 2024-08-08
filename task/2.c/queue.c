#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int CreateQueue(queue *pq){
if(pq!=NULL){
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
    return 1;
}
else{
    return -1;
}
}
int enqueue(int e,queue *pq){
Queuenode *pn=(Queuenode*)malloc(sizeof(Queuenode));
if( pn == NULL || pq == NULL ){
    return -1;
}
else{
    pn->item=e;
    pn->next=NULL;
    if(!pq->front){
        pq->front=pn;
    }
    else{
        pq->rear->next=pn;
        pq->rear=pn;
    }
    pq->size++;
        return 1;

}

}
int dequeue(int *e,queue *pq){
Queuenode *pn=pq->front;
if(e == NULL || pq == NULL || pn == NULL){
    return -1;
}
else{
*e=pn->item;
pq->front=pn->next;
free(pn);
if(!pq->front){
    pq->rear=NULL;
}
pq->size--;
    return 1;

}
}
int EmptyQueue(queue *pq){
if(pq){
    return !pq->front;
}
else{
    return -1;
}
}
int FullQueue(queue *pq){
if(pq)
    return 0;
else
    return -1;
}
int QueueSize(queue *pq){
if(pq)
    return pq->size;
else
    return -1;
}
int ClearQueue(queue *pq){
    if(pq){
while(pq->front){
    pq->rear=pq->front->next;
    free(pq->front);
    pq->front=pq->rear;
}
pq->size=0;
    return 1;
    }
    else{
        return -1;
    }

}
int DisplayQueue(queue *pq,void (*pf)(int)){
Queuenode *pn=pq->front;
if(pf == NULL || pq == NULL || pn == NULL){
    return -1;
}
else{
for(pn;pn;pn=pn->next){
    (*pf)(pn->item);
}
    return 1;

}
}


