#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 10;
    int sum1 = 0;
    int *ptr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        sum1 = sum1 + ptr[i];
    }

    printf("The sum is : %d",sum1);

    return 0;
}
