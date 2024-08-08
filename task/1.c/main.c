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
    int item=10;
    int x=enqueue(item,&q);
    int y=DisplayQueue(NULL,&display);
         printf("y=%i\n",y);  //y=-1 "NOK"
    int z=DisplayQueue(&q,&display);
         printf("y=%i\n",z);  //y=1 "OK"

    return 0;
}
