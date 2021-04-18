#include <stdio.h>
#include <errno.h>
#include <string.h>
int errno ;

int main () {
   FILE * pf;
   int errnum;
   pf = fopen ("file1.txt", "r");
   if (pf == NULL) {
      fprintf(stderr, "Value of errno: %d\n", errno);

      perror("Error printed by perror");

      fprintf(stderr, "Error opening file: %s\n", strerror( errno ));

   } else {   fclose (pf);   }
   return 0;
}
