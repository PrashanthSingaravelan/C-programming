#include<stdio.h>

int* fun1() {
    static int a = 10;         // without static --> a is local, it will die within function itself.
    return(&a);                 // with static --> the variable will be available through out the program.
}

int main()  {

    int *ptr;
    ptr = fun1();

    printf("ptr : %d",ptr);
    printf("\n*ptr : %d",*ptr);

    return 0;
}
