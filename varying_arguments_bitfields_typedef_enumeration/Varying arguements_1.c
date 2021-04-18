#include<stdio.h>
#include<stdarg.h>

void fun1(int num, ...) {   // num --> number of items in the list
    va_list arr1_valist;
    double sum = 0.0;
    va_start(arr1_valist,num);      // va_start macro -->used to initialize the va_list
    for(int i=0;i<num;i++)      {   // va_arg macro (va_list variable(arr1_valist) , int)  --> to access each item in argument list
          printf("%d    ",va_arg(arr1_valist,int));
    }
    va_end(arr1_valist);  // cleaning the memory reserved for va_list
}

int main() {
    printf("To display the numbers 10,20,30,40 : ");
    fun1(4,10,20,30,40);
    return 0;
}

