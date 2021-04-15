#include <stdio.h>
#include <conio.h>

int f(int i) {
       if(i>-1) {
           return (i+f(i-2));
       }
   }

int main()
{
    int i=10;
   printf("%d",f(i));
    return 0;
}

