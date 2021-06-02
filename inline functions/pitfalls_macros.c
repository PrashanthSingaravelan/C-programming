#include<stdio.h>
#include<conio.h>

#define square1(x) x*x        // a+1*a+1
#define square2(x) (x)*(x)   // (a+1)*(a+1)

int main() {
    int a=3;
    int b=square1(a+1);         // 3+1*3+1 --> 3+3+1 --> 7
    printf("num1*num1 : %d",b);

    int c=square2(a+1);          // (3+1)*(3+1) --> 4*4 --> 16
    printf("\nnum1*num1 : %d",c);

    int d = square2(++a);
    printf("\n(++a)*(++a) : %d",d); // ++ or -- is given more preference than *
}
