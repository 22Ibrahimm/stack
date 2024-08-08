#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int CreateStack(stackk *ps){
    if(ps){
       ps->top=0;
       return 1;
    }
    else
        return -1;
}
int StackFull(stackk *ps){
if(ps)
    return ps->top >= MAX;
else
    return -1;
}
int StackEmpty(stackk *ps){
if(ps)
    return !ps->top;
else
    return -1;
}
int push (int x,stackk *ps){
    if(ps){
ps->arr[ps->top++]=x;
return 1;
    }
    else{
        return -1;
    }
}
int StackSize(stackk *ps){
    if(ps){
    return ps->top;
    }
    else{
        return -1;
    }
}
int StackTop(int *px,stackk *ps){
    if(px == NULL || ps == NULL){
        return -1;
    }
    else{
    *px=ps->arr[ps->top-1];
    return 1;
    }
}
int DisPlayStack(stackk *ps,void (*pf) (int)){
    if(ps == NULL || pf == NULL){
    return -1;
    }
    else{
int i;
for(i=ps->top;i>0;--i){
    (*pf)(ps->arr[i-1]);
}
return 1;
    }
}
int pop (int *px,stackk *ps){
    if( px==NULL || ps ==NULL){
        return -1;
    }
    else{
 *px=ps->arr[--ps->top];
 return 1;
    }
}
int ClearStack(stackk *ps){
if(ps)
   return ps->top=0;
else{
    return -1;
}
}
