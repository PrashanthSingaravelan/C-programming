#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a=10,b=20;
	printf("Before swap  a : %d and b : %d",a,b);
	swap(&a,&b);
	printf("\nAfter swap  a : %d and b : %d",a,b);
	return 0;
}
