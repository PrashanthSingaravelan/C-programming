#include <stdio.h>

#define SQUARE(x)       ((x)*(x))
#define CUBE(x)         (SQUARE(x)*(x))
#define FOURTH_POWER(x) (CUBE(x)*(x))
#define FIFTH_POWER(x)  (FOURTH_POWER(x)*(x))

int main() {
 printf("%d",FIFTH_POWER(5));
 return 0;
}
