#include<stdio.h>
#include<conio.h>

int main(int argc,char **argv) {
    printf("Number of arguments passed : %d",argc);
    printf("\nProgram name is : %s",argv[0]);

     if(argc<=1)      {    printf("\nNo arguments are passed through command line");     }
     else                  {    for(int i=0;i<argc;i++)     {   printf("\n Argument-%d : %s",i,argv[i]);       }   }
     return 0;
}
