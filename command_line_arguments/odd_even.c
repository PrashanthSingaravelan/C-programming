#include<stdio.h>
#include <stdlib.h>

char* odd_even(int n) {
        if(n%2==0) { return "Even Number"; }
        else { return "Odd Number"; }
}

int main(int argc,char **argv) {
            if (argc<=1) {  printf("No arguments were passed");         }
            else {
                int num1 = atoi(argv[1]);
                printf("%d is : %s",num1,odd_even(num1));
            }
}

