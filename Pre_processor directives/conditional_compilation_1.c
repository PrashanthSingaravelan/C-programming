#include<stdio.h>
#include<conio.h>

#define NUM 10  // NUM=10
#ifdef NUM                         // ifdef NUM
      #define MAX 20           // MAX=20
#endif                                  // end if

int main()      {
        printf("MAX number is : %d",MAX);
        return 0;
}

