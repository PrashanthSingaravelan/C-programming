#include<stdio.h>
#include<conio.h>
#define Pi 3.1415

int main() {
    float radius,area;
    printf("Enter the radius : ");
    scanf("%f",&radius);

    area = Pi*radius*radius;
    printf("The area is : %.2f",area);
    return 0;
}