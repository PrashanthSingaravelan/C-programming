#include <stdio.h>
#define tokencall(n) printf ("token" #n " = %d", token##n)
#define concat(a,b) printf("\na##b : %d",a##b)

int main(void) {
   int token2=2000;
   tokencall(2);

    int xy = 30;
    concat(x, y);

    return 0;
}
