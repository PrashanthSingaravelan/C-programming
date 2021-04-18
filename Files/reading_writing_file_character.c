#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    FILE *ptr1;
    ptr1 = fopen("test2.txt","w");
    if(ptr1==NULL) { printf("Error in opening the file"); exit(0);  }
    printf("Writing into the file\n");
    int temp = 0;
    char str1[] = "Hello, this is Prashanth" ;
    do  {
            fputc(str1[temp],ptr1); temp++;
    }    while (str1[temp]!='\0');
    fclose(ptr1);

    FILE *ptr2;
    ptr2 = fopen("test2.txt","r");
    printf("Reading from the file\n");
    if(ptr2==NULL) { printf("Error in opening the file"); exit(0);  }
    char ch;
    while(1) {
        ch = fgetc(ptr2);
        if (ch==EOF) { break; }
        else         { printf("%c",ch);        }
    }
    fclose(ptr2);
    return 0;

    
}
