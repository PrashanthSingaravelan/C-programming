#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
main() {
   int a = 20;
   int b = 0;
   int c;
    if( b == 0){
      fprintf(stderr, "Division by zero! Exiting...%d",errno);
      fprintf(stderr, "\nDivision by zero! Exiting...%s",strerror(errno));
      exit(-1);
   }
    c = a / b;
   fprintf(stderr, "Value of quotient : %d\n", c );
   exit(0);
}

