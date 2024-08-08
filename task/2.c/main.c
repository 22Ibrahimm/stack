#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
void display(int e){
printf("%d\n",e);
}
int main()
{
queue q;
    CreateQueue(&q);
    enqueue(10,&q);
         int z=DisplayQueue(&q,&display);
         printf("z=%i\n",z);  //y=1 "OK"

    return 0;
}
