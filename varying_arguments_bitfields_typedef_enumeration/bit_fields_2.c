#include<stdio.h>

struct {
        int age1:10;
        int age2:23;
}obj1;

struct {
    int age1:10;
    int age2:20;
    int age3:1;
}obj2;

int main() {
    printf("Size of obj1 : %d",sizeof(obj1));
    printf("\nSize of obj2 : %d",sizeof(obj2));
    return 0;
}
