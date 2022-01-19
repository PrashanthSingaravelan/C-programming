#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr1;
    ptr1 = fopen("test.txt","w");
    if (ptr1==NULL) {   printf("Error in open the file"); exit(1);    }
    printf("Writing into the file\n");
    fprintf(ptr1,"Hello, This is Prashanth");
    fclose(ptr1);

    FILE *ptr2;
    char ch;
    ptr2 = fopen("test.txt","r");
    if (ptr2==NULL)          {   printf("Error in open the file"); exit(1);    }
    printf("Reading from the file\n");

    while(1)     {
        ch = fgetc(ptr2);
        if (ch==EOF) {  break; }
        else {  printf("%c",ch);        }
    }

    fclose(ptr2);
    return 0;
}


