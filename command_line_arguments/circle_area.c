#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define PI 3.14

int main(int argc, char **argv)  {
    int radius = atoi(argv[1]);
    if (radius<0) { printf("Radius cannot be negative");   }
    else {
           float area = (PI*radius*radius);
            printf("Area of a circle : %3.2f",area);
    }
    return 0;
}
