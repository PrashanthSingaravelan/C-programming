#include<stdio.h>
#include<conio.h>

/*      method-1
// replace operator
#define and &&
#define or ||

int main()  {
    int num1 = 25;

    if ((num1%5==0) and (num1%10==0)) {
                printf("%d is divisible by 5 and 10",num1);
    }
    if ((num1%5==0) or (num1%10==0)) {
                printf("%d is divisible by 5 and 10",num1);
    }
    return 0;
}

*/

/*
// replace condition
#define EXCELLENT (a>=75)

int main() {
    int a = 10;
    if (EXCELLENT) {  printf("The number is greater than 75");  }
    else                    {   printf("The number is not greater than 75");    }

    return 0;
} */

// replace statement
#define ALERT printf("Security alert !!")
int main(){
    ALERT;
}
