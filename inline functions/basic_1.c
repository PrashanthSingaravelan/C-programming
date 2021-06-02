#include<stdio.h>
#include<stdlib.h>

int max(int a,int b) {
    return a > b ? a : b;
}

int two(){ return 2;}

int main() {
    int arg = atoi(argv[1]);
    int result = max(two(),arg);
    printf("result = %d",result);

    return 0;
}
