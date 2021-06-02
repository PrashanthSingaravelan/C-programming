#include <stdio.h>
#include <stdlib.h>
int main () {
   printf("HOMEPATH : %s\n", getenv("HOMEPATH"));
   printf("HOMEDRIVE : %s\n", getenv("HOMEDRIVE"));
   printf("OS : %s\n", getenv("OS"));

   return 0;
}
