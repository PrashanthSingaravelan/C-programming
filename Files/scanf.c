#include <stdio.h>
int main() /* rudimentary calculator */
 {
 double sum, v;
 sum = 0;
 while ((scanf("%lf",&v)) == 1) {       // return type of scanf()=1 
    printf("\t%.2f\n", sum += v); }  
 return 0;
}