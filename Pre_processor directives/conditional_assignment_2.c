#include<stdio.h>
#include<conio.h>
#define MAX 20

                int main()
        {
                #ifdef MAX    // if (MAX)     [if MAX is defined]
                        printf("Maximum value : %d",MAX);
                #else
                        printf("MAX not defined");
                #endif

                printf("\n");   // next line

                #ifndef MIN    // if !(MIN)   [if MIN is un-defined]
                        printf("Minimum value is not defined");
                #else
                        printf("%d",MIN);
                #endif

                return 0;
        }
