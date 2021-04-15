#include<stdio.h>
#include<conio.h>

void fun1(int a) {
    printf("Value of a : %d",a);
}

void fun2(int a, int b) {
    printf("\nValue of a=%d and b=%d",a,b);
}

int fun3(int a , int b) {
        return a+b;
}

int main() {

    //should not be specific to arguement name, should be specific to the number of arguements used in the function.
    // should match the exact function prototype.

    //function without return type
    void (*fun_ptr) (int);
    fun_ptr = &fun1;
    (*fun_ptr)(100);

    void (*fun_ptr2)(int,int);
    fun_ptr2 = &fun2;
    (*fun_ptr2)(10,20);

    //function with return type
    int (*fun_ptr3)(int,int);
    fun_ptr3 = fun3;                                                        // fun_ptr3 = &fun3;
    printf("\nThe sum is %d",(fun_ptr3)(30,40));   // printf("\nThe sum is %d",(*fun_ptr3)(30,40));

    return 0;
}
