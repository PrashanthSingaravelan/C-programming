#include<stdio.h>
int main()
{
   FILE *fp;
   int i,n;
   fp = fopen ("file4. txt", "w");
   for (i=0; i<=100;i= i+10){   putw (i, fp);   }    // putw() --> to write integer data on to the file
   fclose (fp);

   fp = fopen ("file4. txt", "r");
   for (i=0; i<=100; i++){
      n = getw (fp);        // getw() --> to read integer data from the file
      if (feof (fp))    {      printf ("\nreached end of file");         break;      }
      else              {         printf ("%d   ", n);      }
   }
   fclose (fp);
   return 0;
}

