#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int sum1(int a,int b)  { return a+b;}
int sub1(int a,int b)  { return abs(a-b);}
int mul1(int a,int b)  { return a*b;}
int div1(int a,int b)  { return a/b;}

int main()  {

    int x=10,y=5;
                                        // Method-1 (Array of pointers)
    int (*fun_ptr[4])(int x,int y);

    fun_ptr[0] = sum1;
    printf("Sum is : %d",(fun_ptr[0])(x,y));

    fun_ptr[1] = sub1;
    printf("\nDifference : %d",(fun_ptr[1])(x,y));

    fun_ptr[2] = mul1;
    printf("\nProduct : %d",(fun_ptr[2])(x,y));

    fun_ptr[3] = div1;
    printf("\nDivision : %d",(fun_ptr[3])(x,y));


    /*
                                    // Method-2 (Array of function pointers)
    int (*fun_ptr[4])(int x,int y);
    fun_ptr[0] = sum1;
    fun_ptr[1] = sub1;
    fun_ptr[2] = mul1;
    fun_ptr[3] = div1;

    int choice;
    printf("Enter the choice : ");
    scanf("%d",&choice);
    printf("The answer is : %d",(fun_ptr[choice-1])(x,y));
    */

    return 0;
}
