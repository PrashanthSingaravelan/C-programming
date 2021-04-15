#include<stdio.h>
#include<conio.h>

int sum(int *ptr,int size) {
    int total = 0;
    for(int i=0;i<size;i++) {
        total = total + ptr[i];     // total = total + *ptr; ptr++;
    }
    return total;
}

int main() {
    int arr1[5] = {10,20,30,40,50};
    printf("Sum of marks : %d",sum(arr1,( sizeof(arr1)/sizeof(int) ))       );
    return 0;
}
