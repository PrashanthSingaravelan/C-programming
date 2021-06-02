#include <stdio.h>
#define MAX 30
#define MIN 20

int main()  {

            #if defined(MAX)  // if MAX
                        printf("The maximum value : %d",MAX);
            #else
                        printf("The minimum value : %d",MAX);
            #endif

            printf("\n");

            #if MIN     // if !defined(MIN)
                        printf("The minimum value : %d",MIN);
            #else
                        printf("The minimum value : %d",MIN);
            #endif

            return 0;
}
