#include<stdio.h>
#include<conio.h>

inline int square1(int x) { return x*x; }
inline int square2(int x) { return (x)*(x);}
int main() {
    int a=3;

    int b=square1(a+1);         // 3+1*3+1 --> 4*4 --> 16
    printf("num1*num1 : %d",b);

    int c=square2(a+1);          // (3+1)*(3+1) --> 4*4 --> 16
    printf("\nnum1*num1 : %d",c);

    int d = square2(++a);           // 4*4 --> 16
    printf("\n(++a)*(++a) : %d",d); // ++ or -- is given more preference than *

    return 0;
}
