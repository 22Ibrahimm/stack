#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 100
typedef struct {
int top;
int arr[MAX];
}stackk;
typedef struct
{
    stackk s1,s2;
}queue;
int CreateStack(stackk *ps);
int StackFull(stackk *ps);
int StackEmpty(stackk *ps);
int push (int x,stackk *ps);
int pop (int *px,stackk *ps);
int StackSize(stackk *ps);
int StackTop(int *px,stackk *ps);
int DisPlayStack(stackk *ps,void (*pf) (int));
int ClearStack(stackk *ps);

#endif // STACK_H_INCLUDED
