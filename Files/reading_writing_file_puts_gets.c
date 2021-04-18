#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    FILE *ptr1;
    ptr1 = fopen("test3.txt","w");
    if(ptr1==NULL) { printf("Error in opening the file"); exit(0);  }
    printf("Writing into the file\n");
    fputs("Hello, this is Prashanth",ptr1);
    
    fclose(ptr1);

    FILE *ptr2;
    ptr2 = fopen("test3.txt","r");
    printf("Reading from the file\n");
    if(ptr2==NULL) { printf("Error in opening the file"); exit(0);  }
    char ch[300];
    printf("%s",fgets(ch,300,ptr2));
    fclose(ptr2);
    return 0;   
}
