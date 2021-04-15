#include<stdio.h>
#include<conio.h>

struct structjob {
    char a;
    int b;
    float c;
    double d;
}structjob_obj;

union unionjob {
    char a;
    int b;
    float c;
    double d;
}unionjob_obj;

int main() {
    printf("char size : %d",sizeof(char));
    printf("\nint size : %d",sizeof(int));
    printf("\nfloat size : %d",sizeof(float));
    printf("\ndouble size : %d",sizeof(double));

    printf("\n\nSize of structure : %d",sizeof(structjob_obj));
    printf("\nSize of union    : %d",sizeof(unionjob_obj));
    return 0;
}
