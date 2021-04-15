#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int sum1(int a,int b)  { return a+b;}
int sub1(int a,int b)  { return abs(a-b);}
int mul1(int a,int b)  { return a*b;}
int div1(int a,int b)  { return a/b;}

int main()  {

    int x=10,y=5;

    int (*fun_ptr)(int x,int y);

    fun_ptr = sum1;
    printf("Sum is : %d",(fun_ptr)(x,y));

    fun_ptr = sub1;
    printf("\nDifference : %d",(fun_ptr)(x,y));

    fun_ptr = mul1;
    printf("\nProduct : %d",(fun_ptr)(x,y));

    fun_ptr = div1;
    printf("\nDivision : %d",(fun_ptr)(x,y));

return 0;
}
