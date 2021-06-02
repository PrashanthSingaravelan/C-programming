#include<stdio.h>

int *larger(int *x,int *y) {
    if(*x>*y) { return x ; }
    else { return y; }
}

int main() {
    int x = 10;
    int y = 20;

    int *ptr;
    ptr = larger(&x, &y);

    printf("%d is greater",*ptr);

    return 0;
}
