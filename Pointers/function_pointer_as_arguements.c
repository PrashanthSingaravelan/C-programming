#include<stdio.h>
#include<conio.h>

int sum1(int x,int y)  { return x+y; }
int sub1(int x,int y)  { return x-y; }

int (fun1)(int (*ptr_fun1)(int,int) ,int a,int b)
    // int --> return type of fun1
    // fun1 --> function name
    // (int (*ptr_fun1)(int,int)) --> arguements of fun1 (i.e function pointer )
    //  int --> return type of the function pointer || *ptr_func1 --> function pointer || (int,int) --> arguements
    // int (*ptr_fun1)(int,int))  --> together put into ptr_fun1
    {
        return (ptr_fun1)(a,b);   // Coming in as sum1(a,b); and sub1(a,b);
    }


int main() {
    int x=5,y=10;
    // Similar to call by reference -->  Passing the address of the function from main
    // and receiving in the form of pointer in the  function
    printf("Sum : %d",fun1(sum1,x,y));
    printf("\nDifference : %d",fun1(sub1,x,y));
    return 0;
}
