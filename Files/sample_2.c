#include<stdio.h>
int main()
{
	int Fahrenheit;

	for (Fahrenheit = 0; Fahrenheit <= 300; Fahrenheit = Fahrenheit + 20)
		printf("Fahrenheit : %3d --> Celsius : %6.3f\n", Fahrenheit, (5.0/9.0)*(Fahrenheit-32));

    return 0;
}
