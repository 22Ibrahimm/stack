#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
typedef struct queuenode{
int item;
struct queuenode*next;
}Queuenode;
typedef struct{
Queuenode *front;
Queuenode *rear;
int size;
}queue;
int CreateQueue(queue *pq);
int enqueue(int e,queue *pq);
int dequeue(int *e,queue *pq);
int EmptyQueue(queue *pq);
int FullQueue(queue *pq);
int QueueSize(queue *pq);
int DisplayQueue(queue *pq,void (*pf)(int));
int ClearQueue(queue *pq);

#endif // QUEUE_H_INCLUDED
