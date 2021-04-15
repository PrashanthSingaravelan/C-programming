#include<stdio.h>

union data {
    int x;
    char z;
}union_obj1;

int main() {
    union_obj1.x = 10;
    union_obj1.z = 'a';

    printf("x : %d",union_obj1.x);
    printf("\nz : %c",union_obj1.z);

    return 0;
}
