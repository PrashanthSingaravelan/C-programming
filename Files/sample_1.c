#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	a = 15;
	b = a / 2;
	printf("%d\n",b);
	printf("%3d\n",b);
	printf("%03d\n",b);

	c = 15.3;
	d = c / 3;
	printf("%2.1f\n",d);  // total --> 2 digits after decimal point --> 1 digit.
    return 0;
}
