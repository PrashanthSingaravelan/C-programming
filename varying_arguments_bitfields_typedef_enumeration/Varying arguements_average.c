#include<stdio.h>
#include<conio.h>
#include<stdarg.h>

double average(int num,...) {
    double sum1 = 0;
    va_list arr1;
    va_start(arr1,num);
    for(int i=0;i<num;i++)          {       sum1 = sum1 + va_arg(arr1,int);         }
    return sum1/num;
}

int main()   {
    printf("The average is : %f",average(5,10,20,30,40,50));
    return 0;
}
