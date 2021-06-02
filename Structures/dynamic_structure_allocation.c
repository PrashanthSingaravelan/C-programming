#include <stdio.h>
#include <stdlib.h>
struct point
{
  int x;
  int y;
} p[10];
int main()
{
    int num, i;
    struct point *ptr=NULL;

    printf("Enter number of elements: ");   scanf("%d", &num);

    ptr = (struct point*) malloc(num * sizeof(struct point));  //memory allocated using malloc
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements of array: ");
    for(i = 0; i < num; ++i)
    {
        scanf("%d",&(ptr+i)->x);
        scanf("%d",&(ptr+i)->y);

    }
 
 for(i = 0; i < num; ++i)   {   printf ("%d\t%d\n",(ptr+i)->x,(ptr+i)->y);    }

    free(ptr);
    return 0;
}
