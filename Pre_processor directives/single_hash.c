#include <stdio.h>

#define  message_for(a, b)  \
   printf(#a " and " #b ": Have a good day\n")

int main(void) {
   message_for(Jeba, Jeruba);
   return 0;
}
