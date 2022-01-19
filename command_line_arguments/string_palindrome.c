#include<stdio.h>
#include<conio.h>
#include<string.h>

void is_palindrome(char str1[]) {
    int temp=0;
        for(int i=0;i<(strlen(str1)/2)+1;i++) {
            if(str1[i]==str1[strlen(str1)-(i+1)])              {  temp+=1;   }
        }

        if(temp==strlen(str1)/2+1) {    printf("Palindrome");       }
        else                                          {    printf("Not a Palindrome");     }
}

int main(int argc,char **argv) {
     if (argc<=1) {   printf("No arguments were passed");         }
    else               {   is_palindrome(argv[1]);            }
    return 0;
}
