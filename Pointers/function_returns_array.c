#include<stdio.h>
#include<conio.h>

int* getmark() {
    static int marks[5] = {10,20,30,40,50};
    return (marks);
}

int main() {
    int *ptr = getmark();  // getting the starting address of the marks array
    for(int i=0;i<5;i++) {
        printf("%d  ",ptr[i]);
    }
    return 0;
}
