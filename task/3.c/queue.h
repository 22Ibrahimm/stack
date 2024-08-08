#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define MAX_QUEUE 100
typedef struct{
int front;
int rear;
int entry[MAX_QUEUE];
int size;
}queue;
typedef struct{
queue q1,q2;
}stack;
int CreateQueue(queue *pq);
int enqueue(int item,queue *pq);
int dequeue(int *item,queue *pq);
int EmptyQueue(queue *pq);
int FullQueue(queue *pq);
int QueueSize(queue *pq);
int DisplayQueue(queue *pq,void (*pf)(int));
int ClearQueue(queue *pq);


#endif // QUEUE_H_INCLUDED
