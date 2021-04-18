#include<stdio.h>
#include<stdlib.h>

struct {
    unsigned int a;
    unsigned int b;
}obj1;

struct {
    unsigned int a:1;
    unsigned int b:1;
}obj2;

int main() {
    printf("Size of obj1 : %d",sizeof(obj1));
    printf("\nSize of obj2 : %d",sizeof(obj2));
    return 0;
}

